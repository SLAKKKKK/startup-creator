<h1 align="center">startup-creator</h1>
<p align="center">
  <img src="https://img.shields.io/github/issues/DioBruh/startup-creator">
  <img src="https://img.shields.io/github/forks/DioBruh/startup-creator">
  <img src="https://img.shields.io/github/stars/DioBruh/startup-creator">
  <img src="https://img.shields.io/github/license/DioBruh/startup-creator">
  <img src="https://img.shields.io/badge/startup-creator-2ea44f">
  <img src="https://img.shields.io/badge/License-MIT-purple">
</p>

<h2 align="center">
  <p>Language<br><br>
    <img src="https://github.com/DioBruh/startup-creator/blob/main/imgs/46140125-da084900-c26d-11e8-8ea7-c45ae6306309.png"width=100px>
  </p>
</h2>

> Simple program written in c++, for you to place your programs at windows startup.

## 💻 Requirements
* Latest `Mingw-64` or `Mingw-32` installed.
* Windows `8` or higher.

<h3>Windows only!</h3>

## 📲 Configuring
* Change line 
```c++
#define STARTUP_FOLDER "C:\\Users\\USERNAME\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\ARQUIVE.bat"
```
to this example
```c++
#define STARTUP_FOLDER "C:\\Users\\diobrando\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\ARQUIVE.bat"
```


## ☕ Compile
* You can use `g++` or `gcc`

```cmd
gcc startup.cpp -o startup
```

or

```cmd
g++ startup.cpp -o startup
```

If response is like this:

```cmd
"gcc" is not recognized as an internal or external command
```

You need Add clang in your `windows environment`.

Follow this<a href="http://blog.johannesmp.com/2015/09/01/installing-clang-on-windows-pt2/"> link.</a>

## 🤝 Contributors.
<table>
    <td align="center">
      <a href="https://github.com/DioBruh/">
        <img src="https://github.com/OnlyFalopas/falopas-painel/blob/main/devs/87872423.jpg" width="100px;" alt="Foto do DIO"/><br>
        <sub>
          <b>Dio Brando</b>
        </sub>
      </a>
    </td>
  </tr>
</table>
