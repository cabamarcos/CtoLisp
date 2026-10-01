# Traductor de C a Lisp

<!-- academic-catalog:start -->
**UC3M · 3.º curso · Procesadores del lenguaje**

Traducción de un subconjunto de C a Lisp mediante gramáticas Bison, con pruebas de funciones, bucles y expresiones.

**Tecnologías:** C, Bison, Lisp.

[Ver todos mis proyectos académicos](https://github.com/cabamarcos/academic-projects)
<!-- academic-catalog:end -->

To use this code I suggest you to use a linux environment.

To clone the repository:

```bash
git clone https://github.com/cabamarcos/CtoLisp.git
```

Install clisp:

```bash
sudo apt-get install clisp
```

To try the translator you can use this command:

```bash
./trad5 <prueba.c >prueba.l
clisp prueba.l
```

The last version of the translator is located in this [file](./trad5.y)
