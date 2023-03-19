<<<<<<< HEAD
# tp1

* ## Punto 2

### **¿Por que es conveniente incluir el archivo .gitignore?**

La herramienta .gitignore es muy util en el caso que queramos que Git no realice el seguimiento de determinados archivos del proyecto en el que estemos trabajando. _Ejemplo: archivos temporales del entorno de desarrollo, archivos ocultos del sistema, codigo compilado, archivos personales, etc._
Esto se puede hacer por diferentes fines, como por ejemplo por privacidad, seguridad, **y mas importante aun, para no entorpecer el control de versiones del proyecto con archivos innecesarios**.

### ¿Cuando se debe hacer?

### **¿Como configurar el archivo .gitignore?**

#### **.gitignore local**

Para crear un archivo .gitignore debemos crear un archivo de texto y asignarle el nombre ".gitignore", y luego editarlo de manera tal que cada linea del archivo tenga un archivo o carperta que quieramos que Git ignore.

    - Utilizamos * (asterisco) para referirnos a todos los archivos de ese tipo. Ejemplo: *.txt (ignoramos todos los archivos con la extension .txt).

    - Utilizamos / para referirnos a una ruta. Ejemplo: ejercicio1/ (ignoramos los archivos que estan dentro de la carpeta ejercicio1).

    - Y utilizamos # para agregar comentarios en el archivo.

#### **.gitignore global**

Para crear un archivo **.gitignore global** debemos ejecutar el siguiente comando "git config --global core.excludesfile ~/.gitignore_global", el cual creara el archivo ~/.gitignore_global.
Este archivo se edita de la misma manera con la cual editamos el archivo .gitignore local.
Con este archivo lograremos que todos nuestros repositorios Git ignoren los archivo y carpetas especificadas en el .gitignore global.


* ## Punto 3.g

El apartado 1 y 2 nos da el mismo resultado porque el puntero almacena la direccion de memoria de la variable.

En el apartado 3 no obtenemos el mismo resultado, porque este nos da como resultado la direccion del espacio de memoria en la que se encuentra el puntero.