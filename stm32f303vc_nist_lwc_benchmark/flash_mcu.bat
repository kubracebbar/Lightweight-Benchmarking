
SET PATH=%PATH%;C:\Program Files\STMicroelectronics\STM32Cube\STM32CubeProgrammer\bin\

cd C:\Users\Vasilii\STM32CubeIDE\workspace_1.1.0\nist_lwc_becnchmark


STM32_Programmer_CLI.exe -c port=SWD -d Debug\stm32f303vc_nist_lwc_becnchmark.hex -Rst

