# st
My perfect build of suckless's simple terminal.

![st screenshot](https://file.coffee/u/EwXVfS6GGdHmbA.png)

# patches
- st-boxdraw_v2-0.8.3.diff
- st-clipboard-0.8.3.diff
- st-font2-20190416-ba72400.diff
- st-ligatures-boxdraw-20210824-0.8.4.diff
- st-scrollback-20210507-4536f46.diff
- st-scrollback-mouse-20191024-a2c479c.diff

# installation
**Note:** Install the default fonts: Iosevka, Font Awesome and JoyPixels.

Clone the git repository
```sh
git clone https://github.com/SpyHoodle/st
```
Change directory to st
```sh
cd st
```
Make and install st
```sh
make install
```
**Final step:** Add a colourscheme to `~/cols/st.h`. This is where st will read a colorscheme.<br>
This should be in the usual form st would have a colourscheme in it's own source code, as `st.h` is included at compile time.<br>
Alternatively, you could change the location of the colourscheme in `config.h`.
