#pragma once

namespace CU {
    private ref class CustomDataGridView : public System::Windows::Forms::DataGridView
    {
    public:
        CustomDataGridView()
        {
            //consumes more memory but prevents flickering when scrolling
            DoubleBuffered = true;
        }

        property bool DoubleBuffered
        {
            bool get() override
            {
                return __super::DoubleBuffered;
            }
            void set(bool value) override
            {
                __super::DoubleBuffered = value;
            }
        }
    };
}