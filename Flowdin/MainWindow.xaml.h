#pragma once

#include "MainWindow.g.h"

namespace winrt::Flowdin::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow()
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        int32_t MyProperty();
        void MyProperty(int32_t value);
        void GreetButton_Click(const winrt::Windows::Foundation::IInspectable&, const winrt::Microsoft::UI::Xaml::RoutedEventArgs&);
    };
}

namespace winrt::Flowdin::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
