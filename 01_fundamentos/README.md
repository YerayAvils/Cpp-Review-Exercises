# Fundamentos de C++

Esta sección contiene ejercicios de repaso sobre los fundamentos del lenguaje C++.

El objetivo es reforzar sintaxis, operadores, estructuras de control, funciones y conceptos básicos antes de avanzar a temas más complejos.

---

## 01_variables_y_tipos.cpp

### Objetivo
Repasar variables, tipos de datos y constantes.

### Instrucciones

1. Declara variables de tipo:
   - `int`
   - `double`
   - `float`
   - `char`
   - `bool`
   - `string`
2. Asigna un valor a cada una.
3. Muestra todos los valores en pantalla.
4. Declara al menos una constante usando `const`.
5. Intenta identificar qué variables podrían cambiar y cuáles deberían permanecer constantes.

---

## 02_operadores_aritmeticos.cpp

### Objetivo
Repasar operadores aritméticos.

### Instrucciones

1. Pide al usuario dos números.
2. Muestra:
   - Suma.
   - Resta.
   - Multiplicación.
   - División.
   - Módulo, si corresponde.
3. Evita perder decimales cuando realices divisiones.
4. Muestra cada operación de forma clara.

---

## 03_operadores_comparacion_logicos.cpp

### Objetivo
Repasar operadores de comparación y operadores lógicos.

### Instrucciones

1. Pide dos números al usuario.
2. Comprueba si:
   - Son iguales.
   - Son diferentes.
   - El primero es mayor.
   - El segundo es mayor.
3. Crea al menos dos condiciones usando:
   - `&&`
   - `||`
   - `!`
4. Muestra el resultado de cada condición.

---

## 04_if_else.cpp

### Objetivo
Repasar decisiones con `if`, `else if` y `else`.

### Instrucciones

1. Pide la edad de una persona.
2. Clasifícala en diferentes rangos.
3. Muestra un mensaje según el rango.
4. Añade una segunda condición relacionada con otro dato que pidas al usuario.

---

## 05_switch.cpp

### Objetivo
Practicar `switch`.

### Instrucciones

1. Crea un menú con varias opciones.
2. Pide al usuario seleccionar una opción.
3. Usa `switch` para ejecutar una acción diferente para cada opción.
4. Incluye:
   - `case`
   - `break`
   - `default`

---

## 06_for.cpp

### Objetivo
Repasar el ciclo `for`.

### Instrucciones

1. Muestra los números del 1 al 10.
2. Después muestra los números del 10 al 1.
3. Muestra solamente los números pares entre 1 y 20.
4. Calcula la suma de los números del 1 al 100.

---

## 07_while.cpp

### Objetivo
Repasar el ciclo `while`.

### Instrucciones

1. Pide números al usuario repetidamente.
2. El programa debe continuar hasta que introduzca un valor específico para salir.
3. Cuenta cuántos números fueron introducidos.
4. Muestra el resultado al terminar.

---

## 08_do_while.cpp

### Objetivo
Practicar `do while`.

### Instrucciones

1. Crea un menú sencillo.
2. El menú debe mostrarse al menos una vez.
3. Permite al usuario repetir acciones.
4. Termina solamente cuando seleccione la opción de salir.

---

## 09_funciones_basicas.cpp

### Objetivo
Repasar funciones, parámetros y valores de retorno.

### Instrucciones

1. Crea funciones separadas para:
   - Sumar.
   - Restar.
   - Multiplicar.
   - Dividir.
2. Cada función debe recibir parámetros.
3. Cada función debe devolver un resultado.
4. Llama a las funciones desde `main()`.

---

## 10_funciones_void.cpp

### Objetivo
Practicar funciones que no devuelven valores.

### Instrucciones

1. Crea una función que muestre un mensaje.
2. Crea otra función que reciba un nombre.
3. Haz que muestre un saludo personalizado.
4. Usa `void` correctamente.

---

## 11_scope.cpp

### Objetivo
Comprender el alcance de las variables.

### Instrucciones

1. Declara una variable dentro de `main()`.
2. Declara otra dentro de una función.
3. Declara una dentro de un bloque `if`.
4. Intenta identificar desde qué partes del programa puede usarse cada variable.
5. Añade comentarios explicando el alcance de cada una.

---

## 12_conversiones.cpp

### Objetivo
Practicar conversiones de tipos.

### Instrucciones

1. Declara variables `int` y `double`.
2. Realiza una división entre enteros.
3. Después realiza la misma división usando una conversión.
4. Utiliza `static_cast`.
5. Compara los resultados.
6. Escribe un comentario explicando la diferencia.

---

## 13_operadores_asignacion.cpp

### Objetivo
Repasar operadores de asignación.

### Instrucciones

1. Declara una variable numérica.
2. Utiliza:
   - `+=`
   - `-=`
   - `*=`
   - `/=`
3. Muestra el valor después de cada operación.

---

## 14_incremento_decremento.cpp

### Objetivo
Repasar incremento y decremento.

### Instrucciones

1. Declara una variable entera.
2. Utiliza:
   - `++`
   - `--`
3. Prueba incremento antes y después de la variable.
4. Observa el resultado.
5. Escribe un comentario explicando qué diferencia encontraste.

---

## 15_menu_calculadora.cpp

### Objetivo
Combinar varios fundamentos en un solo ejercicio.

### Instrucciones

1. Crea una calculadora sencilla.
2. Muestra un menú con operaciones.
3. Usa `switch` para seleccionar la operación.
4. Usa funciones para realizar los cálculos.
5. Permite repetir el programa hasta que el usuario decida salir.
6. Valida al menos una situación incorrecta, como una división entre cero.

---

## 16_adivina_el_numero.cpp

### Objetivo
Combinar variables, condiciones y ciclos.

### Instrucciones

1. Define un número secreto.
2. Pide al usuario intentar adivinarlo.
3. Indica si el número introducido es:
   - Mayor.
   - Menor.
   - Correcto.
4. Repite hasta que acierte.
5. Cuenta la cantidad de intentos.

---

## 17_tabla_multiplicar.cpp

### Objetivo
Reforzar ciclos y entrada de datos.

### Instrucciones

1. Pide un número al usuario.
2. Muestra su tabla de multiplicar del 1 al 10.
3. Utiliza un ciclo.
4. Formatea la salida de manera clara.

---

## 18_estadisticas_basicas.cpp

### Objetivo
Combinar ciclos, condiciones y variables acumuladoras.

### Instrucciones

1. Pide al usuario varios números.
2. Calcula:
   - Suma.
   - Promedio.
   - Mayor.
   - Menor.
3. Cuenta cuántos son positivos, negativos y ceros.
4. Muestra todos los resultados.

---

# Ejercicios acumulativos

## 19_menu_interactivo.cpp

### Objetivo
Combinar control de flujo y funciones.

### Instrucciones

1. Crea un menú con varias opciones.
2. Cada opción debe llamar a una función distinta.
3. Permite repetir el menú.
4. Incluye una opción para salir.
5. Usa correctamente:
   - `switch`
   - funciones
   - ciclos
   - condiciones

---

## 20_programa_repaso_general.cpp

### Objetivo
Combinar los fundamentos principales de C++.

### Instrucciones

Crea un programa que incluya al menos:

1. Variables de distintos tipos.
2. Entrada y salida de datos.
3. Operadores aritméticos.
4. Comparaciones.
5. Condiciones.
6. Un `switch`.
7. Un ciclo.
8. Al menos dos funciones.
9. Una constante.
10. Una conversión con `static_cast`.

El tema del programa queda a elección del desarrollador.