#include "LoginForm.h"
#include <vcclr.h>
#include <msclr/marshal_cppstd.h>

#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    TOPD::LoginForm LoginForm;
    //TOPD::MyForm LoginForm;

    Application::Run(%LoginForm);
}