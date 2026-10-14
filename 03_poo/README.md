# Programación Orientada a Objetos

Esta sección contiene ejercicios para practicar Programación Orientada a Objetos en C++.

El objetivo es aprender a diseñar clases, crear objetos, encapsular datos y comprender conceptos como constructores, herencia y polimorfismo.

---

## 01_clase_persona.cpp

### Objetivo
Practicar la creación básica de clases y objetos.

### Instrucciones

1. Crea una clase llamada `Persona`.
2. Agrega atributos como:
   - Nombre.
   - Edad.
3. Crea métodos para:
   - Asignar datos.
   - Mostrar datos.
4. Crea varios objetos desde `main()`.
5. Muestra la información de cada persona.

---

## 02_private_public.cpp

### Objetivo
Comprender la diferencia entre `private` y `public`.

### Instrucciones

1. Crea una clase con atributos privados.
2. Intenta acceder directamente a ellos desde `main()`.
3. Crea métodos públicos para acceder a los datos.
4. Añade comentarios explicando por qué ciertos accesos están permitidos y otros no.

---

## 03_constructores.cpp

### Objetivo
Practicar constructores.

### Instrucciones

1. Crea una clase `Producto`.
2. Agrega:
   - Nombre.
   - Precio.
3. Crea un constructor que reciba los datos.
4. Crea varios objetos utilizando el constructor.
5. Muestra sus datos.

---

## 04_getters_setters.cpp

### Objetivo
Practicar getters y setters.

### Instrucciones

1. Crea una clase con atributos privados.
2. Crea getters para consultar sus valores.
3. Crea setters para modificarlos.
4. Añade al menos una validación dentro de un setter.
5. Prueba los métodos desde `main()`.

---

## 05_encapsulacion.cpp

### Objetivo
Comprender el concepto de encapsulación.

### Instrucciones

1. Crea una clase `CuentaBancaria`.
2. Mantén el saldo como atributo privado.
3. Crea métodos para:
   - Consultar saldo.
   - Depositar.
   - Retirar.
4. Evita permitir operaciones inválidas.
5. No permitas modificar directamente el saldo desde `main()`.

---

## 06_this.cpp

### Objetivo
Comprender el puntero `this`.

### Instrucciones

1. Crea una clase cuyos parámetros de constructor tengan los mismos nombres que sus atributos.
2. Usa `this` para distinguirlos.
3. Crea al menos dos objetos.
4. Añade comentarios explicando qué representa `this`.

---

## 07_herencia_basica.cpp

### Objetivo
Practicar herencia.

### Instrucciones

1. Crea una clase base `Animal`.
2. Agrega atributos y métodos comunes.
3. Crea al menos dos clases derivadas.
4. Añade características específicas a cada clase.
5. Crea objetos derivados y usa tanto métodos heredados como propios.

---

## 08_herencia_personas.cpp

### Objetivo
Reforzar clases base y derivadas.

### Instrucciones

1. Crea una clase base `Persona`.
2. Crea clases derivadas como:
   - `Estudiante`.
   - `Empleado`.
3. Coloca los datos comunes en la clase base.
4. Agrega atributos específicos a las clases derivadas.
5. Muestra la información completa de cada objeto.

---

## 09_virtual_override.cpp

### Objetivo
Introducir métodos virtuales.

### Instrucciones

1. Crea una clase base con un método `virtual`.
2. Crea varias clases derivadas.
3. Sobrescribe el método usando `override`.
4. Haz que cada clase tenga un comportamiento diferente.

---

## 10_polimorfismo.cpp

### Objetivo
Practicar polimorfismo.

### Instrucciones

1. Crea una clase base.
2. Crea al menos tres clases derivadas.
3. Define un método virtual común.
4. Guarda objetos derivados mediante referencias o punteros a la clase base.
5. Ejecuta el mismo método y observa los distintos comportamientos.

---

## 11_sistema_productos.cpp

### Objetivo
Combinar varios conceptos de POO.

### Instrucciones

Crea un pequeño sistema de productos que utilice:

1. Clase `Producto`.
2. Atributos privados.
3. Constructor.
4. Getters y setters.
5. Validación de datos.
6. Métodos para mostrar información.
7. Varios objetos almacenados en un contenedor.