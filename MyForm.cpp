#include "MyForm.h"

#include <Windows.h>

using namespace GUI; // �������� �������

void main()
{
	int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int);
	{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		Application::Run(gcnew MyForm);
	}
}