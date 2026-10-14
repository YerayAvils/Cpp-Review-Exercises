# Ejercicios Acumulativos

Esta sección contiene ejercicios y pequeños proyectos que combinan varios conceptos aprendidos anteriormente.

El objetivo es dejar de practicar temas de forma aislada y empezar a resolver problemas más completos, donde tengas que decidir qué herramientas usar y cómo organizar el programa.

Estos ejercicios no están pensados para hacerse todos de golpe.

La idea es resolverlos conforme avances en C++ y tengas suficientes conocimientos para completarlos.

---

## 01_calculadora_mejorada/

### Objetivo
Combinar fundamentos, funciones, validaciones y organización del código.

### Requisitos

1. Crear un menú interactivo.
2. Permitir realizar varias operaciones matemáticas.
3. Separar las operaciones en funciones.
4. Utilizar `switch`.
5. Permitir repetir operaciones hasta que el usuario decida salir.
6. Validar divisiones entre cero.
7. Validar entradas incorrectas.
8. Mantener `main()` lo más limpio posible.

### Operaciones sugeridas

- Suma.
- Resta.
- Multiplicación.
- División.
- Potencia.
- Porcentaje.
- Cambio de signo.

---

## 02_gestor_contactos/

### Objetivo
Combinar POO, vectores, strings y búsquedas.

### Requisitos

1. Crear una clase `Contacto`.
2. Cada contacto debe tener:
   - Nombre.
   - Teléfono.
   - Correo.
3. Guardar los contactos en un `vector`.
4. Permitir:
   - Registrar contactos.
   - Mostrar contactos.
   - Buscar por nombre.
   - Modificar contactos.
   - Eliminar contactos.
5. Evitar acceder directamente a atributos privados.
6. Utilizar métodos apropiados para consultar y modificar datos.

---

## 03_inventario/

### Objetivo
Combinar POO, vectores, búsquedas y cálculos.

### Requisitos

1. Crear una clase `Producto`.
2. Cada producto debe tener:
   - Nombre.
   - Precio.
   - Stock.
3. Guardar los productos en un contenedor.
4. Permitir:
   - Registrar productos.
   - Mostrar productos.
   - Buscar productos.
   - Modificar stock.
   - Eliminar productos.
5. Calcular:
   - Cantidad total de productos.
   - Valor total del inventario.
6. Validar precios y cantidades incorrectas.

---

## 04_registro_alumnos/

### Objetivo
Combinar clases, vectores, cálculos y búsquedas.

### Requisitos

1. Crear una clase `Alumno`.
2. Cada alumno debe tener:
   - Nombre.
   - Edad.
   - Calificación.
3. Permitir registrar varios alumnos.
4. Mostrar todos los alumnos.
5. Buscar un alumno por nombre.
6. Calcular:
   - Promedio general.
   - Calificación más alta.
   - Calificación más baja.
7. Mostrar qué alumnos aprobaron y cuáles no.

---

## 05_lista_tareas/

### Objetivo
Practicar diseño de objetos y manejo de estados.

### Requisitos

1. Crear una clase `Tarea`.
2. Cada tarea debe tener:
   - Descripción.
   - Estado.
3. Permitir:
   - Crear tareas.
   - Mostrar tareas.
   - Marcar como completadas.
   - Eliminar tareas.
4. Mostrar por separado:
   - Tareas pendientes.
   - Tareas completadas.
5. Utilizar un `enum` o `enum class` para representar estados si ya conoces el tema.

---

## 06_gestor_gastos/

### Objetivo
Combinar clases, vectores, categorías y estadísticas.

### Requisitos

1. Crear una clase o estructura `Gasto`.
2. Cada gasto debe tener:
   - Descripción.
   - Cantidad.
   - Categoría.
3. Permitir registrar varios gastos.
4. Mostrar todos los gastos.
5. Calcular:
   - Gasto total.
   - Gasto promedio.
   - Gasto más alto.
6. Mostrar cuánto se gastó por categoría.
7. Permitir buscar gastos.

---

## 07_agenda_persistente/

### Objetivo
Combinar POO, vectores, archivos y persistencia.

### Requisitos

1. Crear contactos.
2. Guardarlos en un archivo.
3. Recuperarlos al iniciar el programa.
4. Permitir:
   - Registrar.
   - Mostrar.
   - Buscar.
   - Modificar.
   - Eliminar.
5. Guardar los cambios realizados.
6. Validar errores básicos de archivo.

### Estructura sugerida

```text
07_agenda_persistente/
├── main.cpp
├── contacto.hpp
├── contacto.cpp
├── agenda.hpp
├── agenda.cpp
└── contactos.txt
```

---

## 08_inventario_persistente/

### Objetivo
Crear una versión más completa del sistema de inventario.

### Requisitos

1. Crear una clase `Producto`.
2. Crear una clase `Inventario`.
3. Permitir:
   - Registrar productos.
   - Buscar productos.
   - Modificar stock.
   - Eliminar productos.
4. Guardar los productos en un archivo.
5. Recuperar los productos al iniciar.
6. Calcular el valor total del inventario.
7. Manejar errores básicos.

### Estructura sugerida

```text
08_inventario_persistente/
├── main.cpp
├── producto.hpp
├── producto.cpp
├── inventario.hpp
├── inventario.cpp
└── inventario.txt
```

---

## 09_sistema_biblioteca/

### Objetivo
Practicar relaciones entre varias clases.

### Clases sugeridas

- `Libro`
- `Usuario`
- `Biblioteca`

### Requisitos

1. Registrar libros.
2. Registrar usuarios.
3. Buscar libros.
4. Consultar disponibilidad.
5. Prestar libros.
6. Devolver libros.
7. Evitar prestar un libro que ya esté prestado.
8. Mostrar qué usuario tiene cada libro.
9. Guardar la información si ya conoces archivos.

---

## 10_sistema_bancario/

### Objetivo
Practicar encapsulación, validaciones y relaciones entre objetos.

### Requisitos

1. Crear una clase `Cuenta`.
2. Mantener el saldo privado.
3. Permitir:
   - Consultar saldo.
   - Depositar.
   - Retirar.
   - Transferir dinero.
4. Evitar:
   - Retiros superiores al saldo.
   - Cantidades negativas.
5. Crear varias cuentas.
6. Buscar cuentas mediante algún identificador.

---

## 11_sistema_empleados/

### Objetivo
Combinar POO, herencia y polimorfismo.

### Requisitos

1. Crear una clase base `Empleado`.
2. Crear diferentes tipos de empleados.
3. Cada tipo debe poder calcular su pago de forma diferente.
4. Utilizar:
   - Herencia.
   - Métodos virtuales.
   - `override`.
5. Guardar distintos tipos de empleados.
6. Mostrar información y pago de cada uno.

---

## 12_catalogo_productos/

### Objetivo
Combinar contenedores STL y búsqueda de datos.

### Requisitos

1. Crear un catálogo de productos.
2. Cada producto debe tener:
   - ID.
   - Nombre.
   - Precio.
   - Categoría.
3. Permitir buscar:
   - Por ID.
   - Por nombre.
   - Por categoría.
4. Ordenar productos por precio.
5. Mostrar el producto más caro y el más barato.
6. Utilizar algoritmos STL si ya los conoces.

---

## 13_gestor_proyectos/

### Objetivo
Crear un programa con varias entidades relacionadas.

### Entidades sugeridas

- Proyecto.
- Tarea.
- Estado.
- Prioridad.

### Requisitos

1. Crear proyectos.
2. Añadir tareas a cada proyecto.
3. Marcar tareas como completadas.
4. Asignar prioridades.
5. Consultar tareas pendientes.
6. Mostrar progreso del proyecto.
7. Buscar proyectos por nombre.
8. Guardar la información si ya conoces persistencia.

---

## 14_gestor_notas/

### Objetivo
Combinar archivos, búsqueda y organización de información.

### Requisitos

1. Crear notas.
2. Cada nota debe tener:
   - Título.
   - Contenido.
3. Permitir:
   - Crear notas.
   - Mostrar notas.
   - Buscar notas.
   - Modificar notas.
   - Eliminar notas.
4. Guardar las notas en archivos.
5. Recuperarlas al iniciar el programa.

---

## 15_analizador_datos/

### Objetivo
Combinar archivos, vectores, algoritmos y estadísticas.

### Requisitos

1. Leer números desde un archivo.
2. Guardarlos en un contenedor.
3. Calcular:
   - Suma.
   - Promedio.
   - Mayor.
   - Menor.
   - Cantidad de elementos.
4. Ordenar los valores.
5. Buscar valores específicos.
6. Contar valores repetidos.
7. Mostrar un resumen final.

---

## 16_sistema_reservas/

### Objetivo
Practicar diseño de clases y validación de estados.

### Requisitos

1. Crear una clase para representar una reserva.
2. Cada reserva debe contener información como:
   - Nombre del cliente.
   - Identificador.
   - Estado.
3. Permitir:
   - Crear reservas.
   - Cancelarlas.
   - Consultarlas.
4. Evitar duplicados.
5. Validar operaciones incorrectas.
6. Mostrar reservas activas y canceladas.

---

## 17_simulador_terminal/

### Objetivo
Crear una aplicación basada completamente en menús y comandos.

### Requisitos

1. Mostrar un menú principal.
2. Tener varios submenús.
3. Separar cada sección en funciones.
4. Mantener el programa funcionando hasta seleccionar salir.
5. Validar opciones incorrectas.
6. Evitar concentrar toda la lógica dentro de `main()`.

### Extra

Si ya conoces clases, utiliza clases para organizar las diferentes partes del programa.

---

## 18_sistema_dispositivos/

### Objetivo
Combinar POO con una temática más cercana a sistemas.

### Requisitos

1. Crear una clase base `Dispositivo`.
2. Agregar datos como:
   - Nombre.
   - ID.
   - Estado.
3. Crear diferentes tipos de dispositivos.
4. Permitir:
   - Encender.
   - Apagar.
   - Consultar estado.
5. Usar herencia cuando tenga sentido.
6. Utilizar polimorfismo si ya conoces el tema.
7. Guardar varios dispositivos en un contenedor.

---

## 19_monitor_sensores/

### Objetivo
Practicar procesamiento de datos con una temática de sistemas.

### Requisitos

1. Simular varios sensores.
2. Cada sensor debe tener:
   - Nombre.
   - ID.
   - Valor.
3. Registrar varias lecturas.
4. Calcular:
   - Promedio.
   - Máximo.
   - Mínimo.
5. Detectar valores fuera de un rango permitido.
6. Mostrar alertas.
7. Guardar las lecturas en archivo si ya conoces persistencia.

---

## 20_proyecto_final_repaso/

### Objetivo
Construir un programa completo utilizando gran parte de lo aprendido durante el repaso de C++.

### Requisitos mínimos

El proyecto debe incluir:

1. Varias funciones.
2. Varias clases.
3. Encapsulación.
4. Constructores.
5. Contenedores STL.
6. Strings.
7. Referencias.
8. Validación de datos.
9. Lectura y escritura de archivos.
10. Separación en archivos `.hpp` y `.cpp`.
11. Manejo básico de errores.
12. Al menos un algoritmo STL.
13. Código dividido por responsabilidades.
14. Un menú o interfaz de consola clara.

### Antes de programar

Define:

1. Qué problema resolverá el programa.
2. Qué funciones tendrá.
3. Qué clases necesitas.
4. Qué información almacenará cada clase.
5. Qué contenedores utilizarás.
6. Qué información será persistente.
7. Cómo se relacionarán las diferentes partes del programa.

Puedes utilizar:

- Papel.
- Pseudocódigo.
- Diagramas sencillos.
- Diagramas de flujo para las partes más complejas.

No es necesario diseñar cada línea del programa.

---

# Proyecto libre

## 21_proyecto_personal/

### Objetivo
Construir algo elegido completamente por el desarrollador.

### Regla principal

No debe ser una copia directa de un tutorial.

Puedes consultar:

- Documentación.
- Libros.
- Código de referencia.
- Ejemplos específicos.

Pero la arquitectura, decisiones y solución deben ser propias.

### Requisitos

El proyecto debe ser lo suficientemente grande como para obligarte a:

1. Diseñar antes de programar.
2. Dividir el problema.
3. Crear varias funciones o clases.
4. Consultar documentación.
5. Resolver errores.
6. Utilizar Git durante el desarrollo.
7. Hacer varios commits.
8. Crear un README explicando el proyecto.

### README del proyecto

Debe explicar:

- Qué hace.
- Qué problema resuelve.
- Cómo compilarlo.
- Cómo ejecutarlo.
- Qué tecnologías utiliza.
- Qué aprendiste construyéndolo.