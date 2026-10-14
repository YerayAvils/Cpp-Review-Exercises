# Archivos y Organización de Código

Esta sección contiene ejercicios para practicar:

- Lectura y escritura de archivos.
- Persistencia de datos.
- Validación de entrada.
- Excepciones.
- Separación del código en archivos `.hpp` y `.cpp`.
- Organización de programas con múltiples archivos.

El objetivo es dejar de trabajar únicamente con programas de un solo archivo y empezar a estructurar proyectos de C++ de forma más ordenada.

---

## 01_escribir_archivo.cpp

### Objetivo
Practicar escritura básica en archivos.

### Instrucciones

1. Crea un archivo de texto desde C++.
2. Escribe al menos 5 líneas dentro del archivo.
3. Cierra correctamente el archivo.
4. Comprueba que el archivo fue creado.
5. Añade una validación por si el archivo no puede abrirse.

---

## 02_leer_archivo.cpp

### Objetivo
Practicar lectura de archivos.

### Instrucciones

1. Abre un archivo de texto existente.
2. Comprueba que se abrió correctamente.
3. Lee el archivo línea por línea.
4. Muestra cada línea en consola.
5. Cierra el archivo al terminar.

---

## 03_guardar_datos_usuario.cpp

### Objetivo
Guardar datos introducidos por el usuario.

### Instrucciones

1. Pide al usuario:
   - Nombre.
   - Edad.
   - Ciudad.
2. Guarda los datos en un archivo.
3. Cierra el archivo.
4. Vuelve a abrirlo.
5. Muestra la información recuperada.

---

## 04_archivo_numeros.cpp

### Objetivo
Combinar archivos con cálculos.

### Instrucciones

1. Pide al usuario varios números.
2. Guarda los números en un archivo.
3. Cierra el archivo.
4. Vuelve a leer todos los números.
5. Calcula:
   - Suma.
   - Promedio.
   - Número mayor.
   - Número menor.
6. Muestra los resultados.

---

## 05_agregar_contenido.cpp

### Objetivo
Practicar escritura sin borrar el contenido anterior.

### Instrucciones

1. Crea un archivo de texto.
2. Escribe algunos datos.
3. Cierra el archivo.
4. Vuelve a abrirlo en modo de agregar contenido.
5. Añade nuevos datos sin borrar los anteriores.
6. Lee el archivo completo y muestra el resultado.

---

## 06_persistencia_productos.cpp

### Objetivo
Guardar y recuperar información de objetos.

### Instrucciones

1. Crea una clase `Producto`.
2. Cada producto debe tener:
   - Nombre.
   - Precio.
   - Stock.
3. Guarda varios productos en un `vector`.
4. Guarda sus datos en un archivo.
5. Cierra el programa.
6. Al volver a ejecutar el programa, carga los productos desde el archivo.
7. Muestra los productos recuperados.

---

## 07_validacion_entrada.cpp

### Objetivo
Practicar validación de datos introducidos por el usuario.

### Instrucciones

1. Pide un número entero.
2. Evita que el programa continúe si el usuario introduce texto u otro dato inválido.
3. Limpia el estado de `cin` cuando sea necesario.
4. Permite volver a intentarlo.
5. Repite el proceso con otro tipo de dato.

---

## 08_try_catch.cpp

### Objetivo
Introducir el manejo de excepciones.

### Instrucciones

1. Crea una función que pueda detectar una situación inválida.
2. Usa `throw` para generar una excepción.
3. Llama a la función dentro de un bloque `try`.
4. Captura el error mediante `catch`.
5. Muestra un mensaje adecuado al usuario.

---

## 09_runtime_error.cpp

### Objetivo
Practicar excepciones estándar.

### Instrucciones

1. Incluye `<stdexcept>`.
2. Crea una operación que pueda fallar.
3. Lanza un `runtime_error`.
4. Captura la excepción.
5. Muestra el mensaje usando `what()`.

---

## 10_separar_funciones/

### Objetivo
Aprender a dividir un programa en varios archivos.

### Estructura

```text
10_separar_funciones/
├── main.cpp
├── funciones.hpp
└── funciones.cpp
```

### Instrucciones

1. Crea varias funciones sencillas.
2. Declara las funciones en `funciones.hpp`.
3. Implementa las funciones en `funciones.cpp`.
4. Incluye el header desde `main.cpp`.
5. Compila los archivos juntos.
6. Comprueba que el programa funciona correctamente.

---

## 11_separar_clase/

### Objetivo
Separar una clase en declaración e implementación.

### Estructura

```text
11_separar_clase/
├── main.cpp
├── producto.hpp
└── producto.cpp
```

### Instrucciones

1. Crea una clase `Producto`.
2. Coloca la declaración de la clase en `producto.hpp`.
3. Coloca la implementación de sus métodos en `producto.cpp`.
4. Incluye el header desde `main.cpp`.
5. Crea varios objetos.
6. Compila todo como un solo programa.

---

## 12_include_guards/

### Objetivo
Comprender la protección de archivos header.

### Instrucciones

1. Crea un archivo `.hpp`.
2. Añade include guards usando:
   - `#ifndef`
   - `#define`
   - `#endif`
3. Después prueba la misma idea usando `#pragma once`.
4. Investiga qué problema evitan.
5. Añade un comentario explicando lo aprendido.

---

## 13_proyecto_multifile/

### Objetivo
Organizar un programa con varias clases.

### Estructura sugerida

```text
13_proyecto_multifile/
├── main.cpp
├── producto.hpp
├── producto.cpp
├── inventario.hpp
└── inventario.cpp
```

### Instrucciones

1. Crea una clase `Producto`.
2. Crea una clase `Inventario`.
3. Separa cada clase en su `.hpp` y `.cpp`.
4. Usa `main.cpp` únicamente para controlar el flujo principal.
5. Evita colocar toda la lógica dentro de `main()`.
6. Compila todos los archivos juntos.

---

## 14_gestor_contactos_persistente/

### Objetivo
Combinar POO, vectores, archivos y organización multifile.

### Estructura sugerida

```text
14_gestor_contactos_persistente/
├── main.cpp
├── contacto.hpp
├── contacto.cpp
├── agenda.hpp
├── agenda.cpp
└── contactos.txt
```

### Requisitos

1. Crear contactos.
2. Mostrar contactos.
3. Buscar contactos.
4. Modificar contactos.
5. Eliminar contactos.
6. Guardar los contactos en un archivo.
7. Cargar los contactos al iniciar el programa.
8. Validar errores básicos.
9. Separar correctamente clases y responsabilidades.

---

## 15_inventario_persistente/

### Objetivo
Construir un pequeño proyecto organizado y con persistencia.

### Estructura sugerida

```text
15_inventario_persistente/
├── main.cpp
├── producto.hpp
├── producto.cpp
├── inventario.hpp
├── inventario.cpp
└── inventario.txt
```

### Requisitos

1. Registrar productos.
2. Mostrar productos.
3. Buscar productos.
4. Modificar stock.
5. Eliminar productos.
6. Guardar cambios en archivo.
7. Recuperar los datos al iniciar.
8. Manejar errores básicos de archivo.
9. Mantener la lógica dividida entre clases.

---

# Ejercicio acumulativo

## 16_proyecto_organizado/

### Objetivo
Construir un programa completo usando varios de los conceptos de esta sección.

### Requisitos mínimos

El proyecto debe utilizar:

1. Al menos dos clases.
2. Archivos `.hpp`.
3. Archivos `.cpp`.
4. `main.cpp`.
5. Lectura de archivos.
6. Escritura de archivos.
7. Persistencia de datos.
8. Validación de entrada.
9. Manejo básico de errores.
10. Una estructura de carpetas clara.

### Regla

Antes de programar:

1. Define qué información debe guardar el programa.
2. Decide qué clases necesitas.
3. Decide qué responsabilidad tendrá cada clase.
4. Define qué información se guardará en archivo.
5. Después comienza la implementación.