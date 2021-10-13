<div style="width: 100%; display: flex; flex-direction: row; justify-content: center;">
<div style="width:20%; margin: 1% 2% 1% 0%;">

[![zeltrex.com](documentation/zeltrex_logo.png)](https://github/issues/zeltrex/cpp_mk_cli_example)
</div><div style="width:50%; text-align: center;">

# Simpleast project example
</div><div style="width:30%;text-align: center;">

[![GitHub release (latest by date)](https://img.shields.io/github/v/release/zeltrex/cpp_mk_cli_example)](https://github.com/zeltrex/cpp_mk_cli_example/releases/latest)
[![GitHub](https://img.shields.io/github/license/zeltrex/cpp_mk_cli_example)](https://github.com/zeltrex/cpp_mk_cli_example/blob/master/LICENSE)
[![GitHub](https://img.shields.io/github/issues/zeltrex/cpp_mk_cli_example)](https://github.com/zeltrex/cpp_mk_cli_example/issues)
</div></div>

## Motivation

This project is an attemt to create template for the simple development, with all essentially needed things.
I will put afforts to add required links to the documentation, ISO, IEC and other basic components to tune this template met high standards even in hobby grade development.

## Features

- **GCC**: C/C++ compiler;
- **sh/bash**: scripts for integration;
- **CMake**: as main build system;
- **CTest**: automation of testing;
- **Googletests**: expert level unit testing and mockups;
- **Doxygen**: project documentation generation;
- **MarkDown**: as main documentation language;
- **Python**: automation;
- **Docker**: for testing and validation;

Project itself will be basic:
- predefined project structure;
- could be extended wtih libraries;
- prepeared to be retargeted for other purpuses;

## Usage

Clone repository and enter to repo directory:

```bash
git clone --recurse-submodules https://github.com/Zeltrex/cpp_mk_cli_example.git
cd cpp_mk_cli_example
```

Simply execute runme.sh

```bash
./runme.sh
```

**NOTE:** In some cases you will nee change permissions for that file (once)

```bash
sudo chmod +x runme.sh
```

## Preconditions

Those project prepeared for the linux Ubuntu, and does not tested in other environments.
All necceccery libs will be installed automatically, Single essential requirement: `Ubuntu 20.04` or higher should be used.
All tests will be done on the latest version of linux with default configurations.

## History


### Integration of CMake


### Documentation

Afret successfull script execution you could find project documentation by link [./.output/docs/html/index.html](http://./.output/docs/html/index.html) or ( <a href="./.output/docs/html/index.html" target="_top">./.output/docs/html/index.html</a>)

## Usefull Links

- Cmake documentation: [CMake Reference Documentation](https://cmake.org/cmake/help/latest/index.html)

## Error List

---


| Parameter                         | Default (Light)                                             | Default (Dark)                                              |
| :-------------------------------- | :---------------------------------------------------------- | ----------------------------------------------------------- |
| **Color Scheme**:<br>primary theme color. This will affect the entire websites color scheme: links, arrows, labels, ...                                     |||
| `--primary-color`                 | <span style="background:#1779c4;color:white">#1779c4</span> | <span style="background:#1982d2;color:white">#1982d2</span> |
| `--primary-dark-color`            | <span style="background:#00559f;color:white">#00559f</span> | <span style="background:#5ca8e2;color:white">#5ca8e2</span> |
| `--primary-light-color`           | <span style="background:#7aabd6;color:black">#7aabd6</span> | <span style="background:#4779ac;color:white">#4779ac</span> |
| `--primary-lighter-color`         | <span style="background:#cae1f1;color:black">#cae1f1</span> | <span style="background:#191e21;color:white">#191e21</span> |
| `--primary-lightest-color`        | <span style="background:#e9f1f8;color:black">#e9f1f8</span> | <span style="background:#191a1c;color:white">#191a1c</span> |
| **Spacing:**<br>default spacings. Most ui components reference these values for spacing, to provide uniform spacing on the page.                            |||
| `--spacing-small`                 | `5px`                                                       |                                                             |
| `--spacing-medium`                | `10px`                                                      |                                                             |
| `--spacing-large`                 | `16px`                                                      |                                                             |
| **Border Radius**:<br>border radius for all rounded ui components. Will affect many components, like dropdowns, memitems, codeblocks, ...                   |||
| `--border-radius-small`           | `4px`                                                       |                                                             |
| `--border-radius-medium`          | `6px`                                                       |                                                             |
| `--border-radius-large`           | `8px`                                                       |                                                             |
| **Content Width**:<br>The content is centered and constrained in its width. To make the content fill the whole page, set the following variable to `auto`.  |||
| `--content-maxwidth`              | `1000px`                                                     |                                                             |
| **Code Fragment Colors**:<br>Color-Scheme of multiline codeblocks                                                                                           |||
| `--fragment-background`           | <span style="background:#282c34;color:white">#282c34</span> |                                                             |
| `--fragment-foreground`           | <span style="background:#fff;wolor:black">#fff</span>       |                                                             |
| **Arrow Opacity**:<br>By default the arrows in the sidebar are only visible on hover. You can override this behaviour so they are visible all the time.     |||
| `--side-nav-arrow-opacity`        | `0`                                                         |                                                             |
| `--side-nav-arrow-hover-opacity`  | `0.9`                                                       |                                                             |
| **Darkmode Toggle Icon**:<br>If you have enabled the darkmode toggle button, you can define the icon that is shown for the current mode.                    |||
| `--darkmode-toggle-button-icon`   | ☀️                                                           | 🌛                                                          |
| ...and many more                                                                                                                                            |||

If you miss a configuration option or find a bug, please consider [opening an issue](https://github.com/jothepro/doxygen-awesome-css/issues)!

### Doxygen generator

The theme overrides most colors with the `--primary-color-*` variables.

But there is a few small images and graphics that the theme cannot adjust or replace. To make these blend in better with
the rest, it is recommended to adjust the [doxygen color settings](https://www.doxygen.nl/manual/customize.html#minor_tweaks_colors) 
to something that matches the chosen color-scheme.

For the default color-scheme, these values work out quite well:

```
# Doxyfile
HTML_COLORSTYLE_HUE    = 209
HTML_COLORSTYLE_SAT    = 255
HTML_COLORSTYLE_GAMMA  = 113
```

## Browser support

Tested with

- Chrome 91, Chrome 91 for Android, Chrome 87 for iOS
- Safari 14, Safari for iOS 14
- Firefox 89, Firefox Daylight 89 for Android, Firefox Daylight 33 for iOS

## Tips & Tricks

### Class Diagrams with Graphviz

To get the best looking class diagrams for your documentation, generate them with Graphviz as vector graphics with transparent background:

```
# Doxyfile
HAVE_DOT = YES
DOT_IMAGE_FORMAT = svg
DOT_TRANSPARENT = YES
```

### Share your own theme customizations

If you customized the theme with custom colors, spacings, font-sizes, etc. and you want to share your creation with others, you can to this [here](https://github.com/jothepro/doxygen-awesome-css/discussions/13).

I am always curious to learn about how you made the theme look even better!


## Credits

This theme is heavily inspired by the beautiful [vuepress](https://vuepress.vuejs.org/) static site generator default theme!
