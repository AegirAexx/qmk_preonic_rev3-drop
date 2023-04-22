# QMK Keyboard compile and flash guide

My personal knowledge base.

## Disclaimer

These are the steps I take in compiling and flashing my **Preonic rev3 from Drop**.

All these steps are done on a Windows 10 machine.

I found the process overly complex on my Linux machine as there was no readily available GUI or a straight forward guide that I found online.

## Programs

- Text Editor (VSCode)
- QMK MSYS: <https://github.com/qmk/qmk_firmware>
- QMK Toolbox: <https://github.com/qmk/qmk_toolbox>

## Steps

The steps needed to successfully compile/flash the layout to the firmware.

### First

Change the source from the repo. Simple and straight forward.

The repo is: <https://github.com/AegirAexx/qmk_preonic_rev3-drop>

### Second

Copy the layout folder to the Preonic keymap folder located in `qmk_firmware`.

**Layout:** `\qmk_firmware\keyboards\preonic\keymaps`

Compile the code using QMK MSYS.

**Command to run:** `qmk compile -kb preonic/rev3_drop -km aexx_dev_is_XXX`

The command can run from any path and the compiled file is then located in the root of the `qmk_firmware` folder as a `aexx_dev_is_XXX.bin` file.

### Third

Flashing the binary onto the keyboard firmware using QMK Toolbox.

**Youtube tutorial:** <https://www.youtube.com/watch?v=fuBJbdCFF0Q>

1. Load the binary.
2. Verify that the correct MCU is loaded: `atmega32u4`
    - The keyboard MCU is listed in the `rules.mk` file within layouts.
    - The Preonic uses `MCU = STM32F303` which translates to `atmega32u4`.
3. Reset the board using the `RESET` button in the extra layer (mod + mod).
4. Press **Flash** in the QMK Toolbox GUI.
5. You are done!
