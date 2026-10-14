# STL y Datos

Esta sección contiene ejercicios para practicar estructuras de datos y herramientas básicas de la STL de C++.

El objetivo es aprender a almacenar, recorrer, buscar, modificar y organizar datos usando contenedores comunes del lenguaje.

---

## 01_vector_basico.cpp

### Objetivo
Practicar las operaciones principales de `std::vector`.

### Instrucciones

1. Crea un `vector<int>`.
2. Pide al usuario 5 números.
3. Guarda cada número usando `push_back()`.
4. Muestra todos los elementos del vector.
5. Muestra:
   - El primer elemento.
   - El último elemento.
   - La cantidad de elementos.
6. Pide al usuario una posición del vector.
7. Muestra el valor que se encuentra en esa posición.
8. Valida que la posición sea correcta.
9. Elimina el último elemento usando `pop_back()`.
10. Muestra nuevamente el vector.
11. Vacía completamente el vector.
12. Comprueba con `empty()` si quedó vacío.

---

## 02_vector_busqueda.cpp

### Objetivo
Practicar recorridos y búsqueda dentro de un `vector`.

### Instrucciones

1. Crea un `vector<int>`.
2. Pide al usuario 10 números y guárdalos.
3. Pide un número adicional que se quiera buscar.
4. Recorre el vector.
5. Indica si el número existe dentro del vector.
6. Si existe, muestra la posición en la que se encontró.
7. Si aparece varias veces, muestra todas sus posiciones.
8. Si no existe, muestra un mensaje indicando que no fue encontrado.

---

## 03_vector_modificacion.cpp

### Objetivo
Practicar acceso y modificación de elementos.

### Instrucciones

1. Crea un vector con varios números.
2. Muestra todos sus elementos.
3. Pide al usuario una posición.
4. Valida que la posición exista.
5. Pide un nuevo valor.
6. Reemplaza el valor almacenado en esa posición.
7. Muestra nuevamente el vector.
8. Pide otra posición.
9. Elimina el elemento de esa posición.
10. Muestra el vector final.

---

## 04_vector_estadisticas.cpp

### Objetivo
Practicar recorridos y cálculos sobre un vector.

### Instrucciones

1. Pide al usuario cuántos números quiere introducir.
2. Guarda todos los números en un vector.
3. Calcula y muestra:
   - La suma total.
   - El promedio.
   - El número mayor.
   - El número menor.
4. Cuenta cuántos números son:
   - Positivos.
   - Negativos.
   - Iguales a cero.

---

## 05_vector_objetos.cpp

### Objetivo
Practicar vectores que almacenan objetos.

### Instrucciones

1. Crea una clase llamada `Producto`.
2. Cada producto debe tener:
   - Nombre.
   - Precio.
   - Cantidad.
3. Crea un `vector<Producto>`.
4. Permite registrar varios productos.
5. Muestra todos los productos almacenados.
6. Permite buscar un producto por nombre.
7. Muestra los datos del producto encontrado.
8. Si no existe, muestra un mensaje correspondiente.

---

# std::array

## 06_array_basico.cpp

### Objetivo
Practicar `std::array`.

### Instrucciones

1. Crea un `array<int, 5>`.
2. Pide al usuario 5 números.
3. Guarda los números dentro del array.
4. Muestra todos los elementos.
5. Muestra:
   - El primer elemento.
   - El último elemento.
   - El tamaño del array.
6. Calcula la suma de todos sus elementos.

---

## 07_array_comparacion.cpp

### Objetivo
Comparar el comportamiento de `array` y `vector`.

### Instrucciones

1. Crea un `array<int, 5>`.
2. Crea un `vector<int>`.
3. Guarda 5 números en ambos.
4. Muestra ambos contenedores.
5. Intenta identificar:
   - Qué contenedor tiene tamaño fijo.
   - Cuál puede aumentar de tamaño.
6. Añade nuevos elementos al vector.
7. Comprueba cómo cambia su tamaño.

---

# std::map

## 08_map_basico.cpp

### Objetivo
Practicar almacenamiento mediante pares clave-valor.

### Instrucciones

1. Crea un `map<string, int>`.
2. Guarda nombres de personas como clave.
3. Guarda sus edades como valor.
4. Registra al menos 5 personas.
5. Muestra todos los registros.
6. Pide un nombre al usuario.
7. Busca ese nombre dentro del map.
8. Si existe, muestra su edad.
9. Si no existe, muestra un mensaje.

---

## 09_map_inventario.cpp

### Objetivo
Practicar modificación de valores dentro de un `map`.

### Instrucciones

1. Crea un `map<string, int>` para representar un inventario.
2. La clave será el nombre del producto.
3. El valor será la cantidad disponible.
4. Agrega varios productos.
5. Permite al usuario:
   - Consultar un producto.
   - Modificar su cantidad.
   - Agregar un producto nuevo.
6. Muestra el inventario actualizado.

---

# std::unordered_map

## 10_unordered_map_basico.cpp

### Objetivo
Practicar `unordered_map`.

### Instrucciones

1. Crea un `unordered_map<string, string>`.
2. Guarda nombres de países como clave.
3. Guarda sus capitales como valor.
4. Registra varios países.
5. Pide al usuario el nombre de un país.
6. Busca su capital.
7. Muestra el resultado.
8. Si no existe, muestra un mensaje.

---

## 11_map_vs_unordered_map.cpp

### Objetivo
Observar diferencias básicas entre `map` y `unordered_map`.

### Instrucciones

1. Crea un `map<int, string>`.
2. Crea un `unordered_map<int, string>`.
3. Guarda los mismos datos en ambos.
4. Recorre ambos contenedores.
5. Observa el orden en el que aparecen los elementos.
6. Escribe un comentario en el código explicando qué diferencia observaste.

---

# std::set

## 12_set_basico.cpp

### Objetivo
Practicar almacenamiento de valores únicos.

### Instrucciones

1. Crea un `set<int>`.
2. Pide al usuario 10 números.
3. Inserta todos los números en el set.
4. Muestra los elementos almacenados.
5. Observa qué sucede si el usuario introdujo números repetidos.
6. Muestra la cantidad final de elementos.

---

## 13_set_busqueda.cpp

### Objetivo
Practicar búsquedas dentro de un `set`.

### Instrucciones

1. Crea un set con varios números.
2. Pide al usuario un número.
3. Comprueba si existe dentro del set.
4. Muestra un mensaje indicando si fue encontrado.
5. Si existe, elimínalo.
6. Muestra el set actualizado.

---

# Strings

## 14_string_basico.cpp

### Objetivo
Repasar operaciones comunes con `std::string`.

### Instrucciones

1. Pide al usuario su nombre completo.
2. Usa `getline()` para leerlo.
3. Muestra:
   - El texto completo.
   - Su longitud.
   - El primer carácter.
   - El último carácter.
4. Recorre la cadena carácter por carácter.

---

## 15_string_busqueda.cpp

### Objetivo
Practicar búsqueda y extracción de texto.

### Instrucciones

1. Pide al usuario una frase.
2. Pide una palabra.
3. Comprueba si la palabra aparece en la frase.
4. Si aparece:
   - Muestra la posición en la que comienza.
5. Extrae una parte de la frase usando `substr()`.
6. Muestra el resultado.

---

## 16_string_contador.cpp

### Objetivo
Practicar recorrido y análisis de cadenas.

### Instrucciones

1. Pide al usuario una frase.
2. Recorre todos sus caracteres.
3. Cuenta:
   - Letras.
   - Espacios.
   - Números.
4. Muestra los resultados.

---

# Iteradores

## 17_iteradores_vector.cpp

### Objetivo
Aprender a recorrer un vector usando iteradores.

### Instrucciones

1. Crea un vector con varios números.
2. Recorre el vector usando un iterador.
3. Muestra todos los elementos.
4. Recorre nuevamente el vector usando `begin()` y `end()`.
5. Compara este recorrido con un `range-based for`.

---

## 18_iteradores_modificacion.cpp

### Objetivo
Modificar elementos mediante iteradores.

### Instrucciones

1. Crea un vector de números.
2. Recorre el vector usando iteradores.
3. Multiplica cada elemento por 2.
4. Muestra el vector final.

---

# Ejercicios acumulativos

## 19_registro_alumnos.cpp

### Objetivo
Combinar `vector`, clases, strings y búsqueda.

### Instrucciones

1. Crea una clase `Alumno`.
2. Cada alumno debe tener:
   - Nombre.
   - Edad.
   - Calificación.
3. Guarda los alumnos en un `vector`.
4. Permite registrar varios alumnos.
5. Muestra todos los alumnos.
6. Permite buscar un alumno por nombre.
7. Calcula el promedio de calificaciones.
8. Muestra al alumno con la calificación más alta.

---

## 20_contador_palabras.cpp

### Objetivo
Combinar strings y `map`.

### Instrucciones

1. Pide al usuario una frase.
2. Separa la frase en palabras.
3. Guarda cada palabra en un `map`.
4. Usa el valor del map como contador.
5. Muestra cuántas veces aparece cada palabra.

---

## 21_eliminar_duplicados.cpp

### Objetivo
Combinar `vector` y `set`.

### Instrucciones

1. Pide al usuario varios números.
2. Guárdalos en un vector.
3. Usa un `set` para eliminar duplicados.
4. Muestra:
   - El vector original.
   - Los valores sin repetir.

---

## 22_inventario_completo.cpp

### Objetivo
Combinar clases, vector, map y strings.

### Instrucciones

1. Crea una clase `Producto`.
2. Cada producto debe tener:
   - Nombre.
   - Precio.
   - Stock.
3. Permite registrar productos.
4. Permite mostrar todos los productos.
5. Permite buscar un producto.
6. Permite modificar su stock.
7. Permite eliminar un producto.
8. Muestra el valor total del inventario.