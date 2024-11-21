#include "pch.h"

SDK::UEngine* Engine;
SDK::UWorld* World;
SDK::APlayerController* Player0;
SDK::UIpNetDriver* NetDriver;
SDK::UKismetSystemLibrary* Kismet;
SDK::UGameplayStatics* Statics;

uintptr_t GBA{0};


void InitVars() {
	Engine = SDK::UEngine::GetEngine();
	World = SDK::UWorld::GetWorld();
	Player0 = World->OwningGameInstance->LocalPlayers[0]->PlayerController;
	Kismet = SDK::UKismetSystemLibrary::GetDefaultObj();

}

void Init() {
	GBA = (uintptr_t)GetModuleHandleA("keatonClient-Win64-Shipping.exe");

	AllocConsole();
	FILE* Dummy;
	freopen_s(&Dummy, "CONOUT$", "w", stdout);
	freopen_s(&Dummy, "CONIN$", "r", stdin);
	InitVars();

	std::cout << "\n\nKeatonMoreLikeCleatsOn has successfully been injected into Hyenas!\n\n" << std::endl;

	SDK::UInputSettings::GetDefaultObj()->ConsoleKeys[0].KeyName = SDK::UKismetStringLibrary::Conv_StringToName(L"Tilde");
	SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(Engine->ConsoleClass, Engine->GameViewport);
	Engine->GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(NewObject);
}


BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ulReasonForCall, LPVOID lpReserved) {
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall != DLL_PROCESS_ATTACH)
		return TRUE;

	HANDLE hThread = CreateThread(nullptr, 0,
		(LPTHREAD_START_ROUTINE)Init, hModule, 0, 0);
	if (hThread != nullptr)
		CloseHandle(hThread);


	return TRUE;
}