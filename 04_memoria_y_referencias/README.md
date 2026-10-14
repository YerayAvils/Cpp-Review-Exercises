# Memoria y Referencias

Esta sección contiene ejercicios relacionados con referencias, punteros y gestión de memoria en C++.

El objetivo es comprender cómo C++ trabaja con direcciones de memoria, referencias a objetos y memoria dinámica.

---

## 01_referencia_basica.cpp

### Objetivo
Comprender qué es una referencia.

### Instrucciones

1. Declara una variable entera.
2. Crea una referencia hacia esa variable.
3. Muestra ambas.
4. Modifica el valor mediante la referencia.
5. Comprueba qué ocurrió con la variable original.

---

## 02_valor_vs_referencia.cpp

### Objetivo
Comprender la diferencia entre paso por valor y paso por referencia.

### Instrucciones

1. Crea una función que reciba un número por valor.
2. Modifica el número dentro de la función.
3. Comprueba el valor original.
4. Repite utilizando una referencia.
5. Compara los resultados.

---

## 03_const_reference.cpp

### Objetivo
Practicar referencias constantes.

### Instrucciones

1. Crea una función que reciba un `string` mediante referencia constante.
2. Muestra el contenido.
3. Intenta modificarlo dentro de la función.
4. Observa el comportamiento del compilador.
5. Explica mediante un comentario para qué sirve `const`.

---

## 04_direccion_memoria.cpp

### Objetivo
Comprender las direcciones de memoria.

### Instrucciones

1. Declara varias variables.
2. Muestra sus valores.
3. Muestra sus direcciones usando `&`.
4. Observa cómo se representan las direcciones.

---

## 05_puntero_basico.cpp

### Objetivo
Introducir punteros.

### Instrucciones

1. Declara una variable.
2. Crea un puntero hacia ella.
3. Muestra:
   - Valor de la variable.
   - Dirección.
   - Valor almacenado en el puntero.
   - Valor obtenido al desreferenciarlo.
4. Modifica la variable mediante el puntero.

---

## 06_nullptr.cpp

### Objetivo
Practicar punteros nulos.

### Instrucciones

1. Crea un puntero inicializado con `nullptr`.
2. Comprueba si apunta a algún objeto.
3. Asigna posteriormente una dirección válida.
4. Comprueba nuevamente su estado.

---

## 07_punteros_objetos.cpp

### Objetivo
Utilizar punteros con objetos.

### Instrucciones

1. Crea una clase sencilla.
2. Crea un objeto.
3. Crea un puntero hacia ese objeto.
4. Accede a sus métodos mediante el puntero.
5. Practica el operador `->`.

---

## 08_stack_heap.cpp

### Objetivo
Comprender de forma básica stack y heap.

### Instrucciones

1. Crea una variable local normal.
2. Crea otra variable mediante memoria dinámica.
3. Identifica cuál pertenece al stack y cuál al heap.
4. Escribe comentarios explicando la diferencia.

---

## 09_new_delete.cpp

### Objetivo
Practicar memoria dinámica manual.

### Instrucciones

1. Reserva memoria para un entero usando `new`.
2. Guarda un valor.
3. Muestra el valor.
4. Libera la memoria usando `delete`.
5. Evita utilizar el puntero después de liberar la memoria.

---

## 10_array_dinamico.cpp

### Objetivo
Practicar memoria dinámica con varios elementos.

### Instrucciones

1. Pide al usuario un tamaño.
2. Reserva memoria para esa cantidad de enteros.
3. Pide los valores.
4. Muéstralos.
5. Libera correctamente la memoria.

---

## 11_unique_ptr.cpp

### Objetivo
Introducir `unique_ptr`.

### Instrucciones

1. Crea un objeto utilizando `unique_ptr`.
2. Accede a sus datos.
3. Observa cómo la memoria se libera automáticamente.
4. Investiga por qué un `unique_ptr` no puede copiarse directamente.

---

## 12_shared_ptr.cpp

### Objetivo
Introducir `shared_ptr`.

### Instrucciones

1. Crea un objeto mediante `shared_ptr`.
2. Crea otra referencia compartida hacia el mismo objeto.
3. Consulta el contador de referencias.
4. Observa cómo cambia cuando desaparecen referencias.

---

## 13_weak_ptr.cpp

### Objetivo
Comprender el propósito básico de `weak_ptr`.

### Instrucciones

1. Crea un `shared_ptr`.
2. Crea un `weak_ptr` que observe el mismo objeto.
3. Comprueba si el objeto continúa existiendo.
4. Accede mediante `lock()` cuando sea válido.

---

## 14_repaso_memoria.cpp

### Objetivo
Combinar referencias, punteros y gestión de memoria.

### Instrucciones

Crea un programa pequeño que utilice:

1. Paso por referencia.
2. Referencia constante.
3. Un puntero.
4. `nullptr`.
5. Al menos un smart pointer.
6. Comentarios indicando quién es responsable de cada objeto.