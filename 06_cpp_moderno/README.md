# C++ Moderno

Esta sección contiene ejercicios para practicar características modernas de C++ y herramientas de la STL que ayudan a escribir código más claro, seguro y expresivo.

El objetivo es comenzar a utilizar técnicas modernas del lenguaje después de dominar los fundamentos, contenedores, POO, referencias, punteros y organización de código.

---

## 01_auto.cpp

### Objetivo
Practicar la deducción automática de tipos con `auto`.

### Instrucciones

1. Declara varias variables usando tipos explícitos.
2. Crea variables equivalentes usando `auto`.
3. Utiliza diferentes tipos de datos.
4. Muestra los valores en pantalla.
5. Añade comentarios indicando qué tipo dedujo el compilador.

---

## 02_range_based_for.cpp

### Objetivo
Practicar `range-based for`.

### Instrucciones

1. Crea un `vector<int>`.
2. Guarda varios valores.
3. Recorre el vector con un `for` tradicional.
4. Recorre el mismo vector usando `range-based for`.
5. Compara ambas formas.
6. Añade un comentario explicando cuándo resulta más cómoda cada una.

---

## 03_const_auto_reference.cpp

### Objetivo
Practicar `const auto&`.

### Instrucciones

1. Crea un vector de strings u objetos.
2. Recorre primero el vector copiando cada elemento.
3. Recorre después utilizando `const auto&`.
4. Comprueba que puedes leer los elementos.
5. Intenta modificarlos.
6. Añade un comentario explicando por qué `const auto&` puede ser útil.

---

## 04_enum.cpp

### Objetivo
Practicar enumeraciones tradicionales.

### Instrucciones

1. Crea un `enum` que represente varios estados.
2. Declara una variable utilizando ese tipo.
3. Asigna diferentes valores.
4. Usa una estructura de control para reaccionar según el estado.
5. Muestra un mensaje diferente para cada caso.

---

## 05_enum_class.cpp

### Objetivo
Practicar `enum class`.

### Instrucciones

1. Crea un `enum class`.
2. Añade varios valores.
3. Declara una variable de ese tipo.
4. Utiliza sus valores dentro del programa.
5. Compara su uso con un `enum` tradicional.
6. Añade un comentario indicando alguna diferencia que hayas observado.

---

## 06_struct.cpp

### Objetivo
Practicar estructuras con `struct`.

### Instrucciones

1. Crea un `struct` para representar una entidad sencilla.
2. Añade varios datos.
3. Crea varios objetos.
4. Guarda los objetos en un vector.
5. Recorre el vector.
6. Muestra toda la información.

---

## 07_sobrecarga_funciones.cpp

### Objetivo
Practicar sobrecarga de funciones.

### Instrucciones

1. Crea varias funciones con el mismo nombre.
2. Cambia:
   - El número de parámetros.
   - El tipo de los parámetros.
3. Llama a todas las versiones.
4. Observa cuál selecciona el compilador.
5. Añade comentarios explicando por qué se ejecuta cada versión.

---

## 08_sobrecarga_operadores.cpp

### Objetivo
Introducir la sobrecarga de operadores.

### Instrucciones

1. Crea una clase sencilla.
2. Elige un operador apropiado para esa clase.
3. Sobrecarga el operador.
4. Crea varios objetos.
5. Utiliza el operador entre ellos.
6. Muestra el resultado.

---

## 09_template_funcion.cpp

### Objetivo
Introducir templates de funciones.

### Instrucciones

1. Crea una función template.
2. Haz que pueda trabajar con diferentes tipos.
3. Prueba la función con:
   - `int`
   - `double`
   - Otro tipo compatible.
4. Compara el resultado.
5. Evita crear versiones separadas de la misma función para cada tipo.

---

## 10_template_clase.cpp

### Objetivo
Practicar clases template.

### Instrucciones

1. Crea una clase template.
2. Haz que almacene un dato de tipo genérico.
3. Añade un método para modificar el dato.
4. Añade otro método para consultarlo.
5. Crea objetos usando distintos tipos.
6. Muestra los resultados.

---

## 11_lambda_basica.cpp

### Objetivo
Introducir expresiones lambda.

### Instrucciones

1. Crea una lambda sencilla.
2. Haz que reciba parámetros.
3. Haz que devuelva un valor.
4. Guarda la lambda en una variable.
5. Ejecútala varias veces con diferentes datos.

---

## 12_lambda_capturas.cpp

### Objetivo
Practicar capturas en lambdas.

### Instrucciones

1. Declara varias variables fuera de una lambda.
2. Crea una lambda que utilice alguna de esas variables.
3. Prueba diferentes formas de captura.
4. Comprueba cuáles permiten leer valores.
5. Investiga cuáles permiten modificarlos.
6. Añade comentarios explicando lo observado.

---

## 13_lambda_vector.cpp

### Objetivo
Combinar lambdas con contenedores.

### Instrucciones

1. Crea un vector de números.
2. Recorre sus elementos.
3. Utiliza una lambda para realizar alguna operación.
4. Muestra los resultados.
5. Intenta que la lambda reciba cada valor como parámetro.

---

# Algoritmos STL

## 14_find.cpp

### Objetivo
Practicar `std::find`.

### Instrucciones

1. Crea un vector con varios elementos.
2. Pide al usuario un valor.
3. Busca el valor utilizando `std::find`.
4. Comprueba si fue encontrado.
5. Muestra el resultado.

---

## 15_count.cpp

### Objetivo
Practicar `std::count`.

### Instrucciones

1. Crea un vector con valores repetidos.
2. Pide al usuario un valor.
3. Cuenta cuántas veces aparece.
4. Muestra la cantidad encontrada.

---

## 16_sort.cpp

### Objetivo
Practicar `std::sort`.

### Instrucciones

1. Crea un vector desordenado.
2. Muestra el contenido original.
3. Ordénalo de menor a mayor.
4. Muestra el resultado.
5. Después intenta ordenarlo de mayor a menor.

---

## 17_reverse.cpp

### Objetivo
Practicar `std::reverse`.

### Instrucciones

1. Crea un vector.
2. Muestra el orden original.
3. Invierte el orden de los elementos.
4. Muestra el resultado.

---

## 18_min_max_element.cpp

### Objetivo
Practicar `std::min_element` y `std::max_element`.

### Instrucciones

1. Crea un vector con varios números.
2. Busca el elemento más pequeño.
3. Busca el elemento más grande.
4. Muestra ambos valores.

---

## 19_algoritmos_combinados.cpp

### Objetivo
Combinar varios algoritmos STL.

### Instrucciones

1. Crea un vector con valores repetidos y desordenados.
2. Muestra el vector original.
3. Busca un valor.
4. Cuenta cuántas veces aparece.
5. Ordena el vector.
6. Busca el menor.
7. Busca el mayor.
8. Invierte el orden.
9. Muestra el resultado después de cada operación.

---

# Conversiones y tipos

## 20_static_cast.cpp

### Objetivo
Practicar `static_cast`.

### Instrucciones

1. Crea variables de diferentes tipos numéricos.
2. Realiza una división entre enteros.
3. Repite la división usando `static_cast`.
4. Compara los resultados.
5. Realiza al menos otra conversión explícita.
6. Añade comentarios explicando qué ocurrió.

---

## 21_conversiones_cpp.cpp

### Objetivo
Conocer diferentes formas de conversión.

### Instrucciones

Investiga y crea ejemplos básicos de:

- `static_cast`
- `dynamic_cast`
- `const_cast`
- `reinterpret_cast`

Para cada uno:

1. Escribe un ejemplo pequeño.
2. Añade comentarios explicando para qué sirve.
3. No utilices conversiones sin entender qué están haciendo.
4. Identifica cuál de ellas usarías con mayor frecuencia en código normal.

---

# Scope y tiempo de vida

## 22_scope_lifetime.cpp

### Objetivo
Reforzar scope y lifetime.

### Instrucciones

1. Declara variables:
   - Dentro de `main()`.
   - Dentro de una función.
   - Dentro de un `if`.
   - Dentro de un ciclo.
2. Identifica cuándo deja de existir cada variable.
3. Añade comentarios explicando su alcance y tiempo de vida.

---

# Características modernas

## 23_nullptr.cpp

### Objetivo
Practicar el uso moderno de punteros nulos.

### Instrucciones

1. Crea un puntero.
2. Inicialízalo con `nullptr`.
3. Comprueba si contiene una dirección válida.
4. Asigna después una dirección.
5. Vuelve a comprobar su estado.

---

## 24_constexpr.cpp

### Objetivo
Introducir `constexpr`.

### Instrucciones

1. Declara una constante usando `const`.
2. Declara otra usando `constexpr`.
3. Crea una función sencilla compatible con `constexpr`.
4. Utiliza esa función.
5. Añade comentarios explicando la diferencia que hayas entendido entre ambos conceptos.

---

## 25_structured_bindings.cpp

### Objetivo
Practicar structured bindings.

### Instrucciones

1. Utiliza una estructura que contenga varios datos.
2. Separa esos datos mediante structured bindings.
3. Guarda cada parte en una variable.
4. Muestra los valores.
5. Compara esta forma con acceder a cada miembro manualmente.

---

## 26_using.cpp

### Objetivo
Practicar alias de tipos con `using`.

### Instrucciones

1. Crea un alias para un tipo sencillo.
2. Crea otro alias para un tipo más largo o complejo.
3. Utiliza ambos en varias declaraciones.
4. Añade comentarios explicando cómo mejoran la legibilidad.

---

# Operadores bitwise

## 27_bitwise_basico.cpp

### Objetivo
Introducir operadores bit a bit.

### Instrucciones

Practica los operadores:

- `&`
- `|`
- `^`
- `~`

Para cada uno:

1. Utiliza números pequeños.
2. Escribe sus valores binarios como comentarios.
3. Realiza la operación.
4. Muestra el resultado.
5. Intenta explicar qué ocurrió a nivel de bits.

---

## 28_bit_shifts.cpp

### Objetivo
Practicar desplazamientos de bits.

### Instrucciones

1. Utiliza un número entero pequeño.
2. Aplica:
   - `<<`
   - `>>`
3. Muestra el resultado.
4. Escribe como comentario la representación binaria antes y después.
5. Intenta relacionar el desplazamiento con multiplicaciones o divisiones por potencias de 2.

---

# Preprocesador y namespaces

## 29_preprocesador.cpp

### Objetivo
Conocer conceptos básicos del preprocesador.

### Instrucciones

1. Utiliza `#include`.
2. Define una constante sencilla usando `#define`.
3. Compárala con una constante usando `const` o `constexpr`.
4. Investiga por qué normalmente se prefieren las opciones del lenguaje cuando sea posible.
5. Añade comentarios con tus conclusiones.

---

## 30_namespace.cpp

### Objetivo
Practicar namespaces.

### Instrucciones

1. Crea dos namespaces.
2. Dentro de cada uno, crea una función con el mismo nombre.
3. Llama a ambas funciones desde `main()`.
4. Utiliza el operador `::`.
5. Comprueba cómo los namespaces evitan conflictos de nombres.

---

# Ejercicios acumulativos

## 31_procesador_numeros.cpp

### Objetivo
Combinar STL moderna, lambdas y algoritmos.

### Requisitos

1. Crea un vector de números.
2. Permite introducir datos.
3. Muestra los valores.
4. Ordénalos.
5. Busca valores.
6. Cuenta repeticiones.
7. Obtén mínimo y máximo.
8. Utiliza al menos una lambda.
9. Utiliza `auto` donde tenga sentido.

---

## 32_registro_estados.cpp

### Objetivo
Combinar `struct`, `enum class`, vectores y algoritmos.

### Requisitos

1. Crea un `enum class` para representar estados.
2. Crea un `struct` que contenga:
   - Nombre.
   - Estado.
   - Otro dato.
3. Guarda varios elementos en un vector.
4. Recorre usando `const auto&`.
5. Busca elementos.
6. Ordena por algún criterio.
7. Muestra los resultados.

---

## 33_sistema_generico.cpp

### Objetivo
Combinar templates y características modernas.

### Requisitos

1. Crea al menos una función template.
2. Crea una clase template sencilla.
3. Utiliza `auto`.
4. Utiliza referencias constantes.
5. Prueba el sistema con diferentes tipos de datos.

---

## 34_repaso_cpp_moderno.cpp

### Objetivo
Combinar varios conceptos modernos de C++.

### Requisitos mínimos

El programa debe utilizar al menos:

1. `auto`.
2. Range-based `for`.
3. `const auto&`.
4. `enum class` o `struct`.
5. Una lambda.
6. Un algoritmo STL.
7. `static_cast`.
8. `nullptr`.
9. Una característica adicional de esta sección.

### Regla

El tema del programa queda a elección del desarrollador.

Antes de comenzar:

1. Decide qué problema resolverá.
2. Identifica qué características modernas tienen sentido utilizar.
3. No introduzcas características únicamente para cumplir la lista.
4. Prioriza que el código siga siendo entendible.