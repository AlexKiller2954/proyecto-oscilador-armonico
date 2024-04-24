# Proyecto Oscilador Armónico Cuántico

Este proyecto es una implementación en C de un programa que resuelve la ecuación de Schrödinger para el oscilador armónico cuántico utilizando el método de Numerov. También incluye un script en Python para graficar las soluciones encontradas.

## Contenido

- [Requisitos](#requisitos)
- [Compilación](#compilación)
- [Resultados](#resultados)
- [Gráficos](#gráficos)
- [Referencias](#referencias)

## Requisitos

Para compilar y ejecutar el código en C, necesitarás un compilador de C, como `gcc`, instalado en tu sistema.

Para ejecutar el script en Python, se requiere tener Python 3 instalado, junto con las bibliotecas `numpy` y `matplotlib`. Puedes instalar estas dependencias con:

```bash
pip install -r requirements.txt
```

## Compilación

Para compilar el código en C, puedes utilizar el archivo `Makefile` proporcionado. Desde la carpeta `c/`, puedes ejecutar:

```bash
make
```
## Uso

El programa en C tiene opciones de línea de comandos para personalizar los parámetros de la simulación. Puedes usar:

```bash
./oscilador_armonico --n <valor> --dx <valor>
```

### Argumentos opcionales:
- `--n <valor>`: Especifica el número de puntos en la simulación (por defecto: 1000).
- `--dx <valor>`: Especifica el tamaño del paso en x (por defecto: 0.01).

## Gráficos

El script `grafica.py` en Python se puede utilizar para graficar las soluciones obtenidas. Puedes usarlo de la siguiente manera:

```bash
python grafica.py
```

Esto generará gráficos de las funciones de onda a partir de los archivos de texto generados.

## Referencias

- [Wikipedia - Oscilador armónico cuántico](https://es.wikipedia.org/wiki/Oscilador_armónico_cuantico)
- [Método de Numerov](https://en.wikipedia.org/wiki/Numerov%27s_method)
- [Gitlab - Diego Andrés Restrepo Leal - Oscilador armónico cuántico](https://gitlab.com/diegorestrepo/sistemas_operativos/-/blob/main/Documentos/oscilador_armonico_cuantico.md)
- [Gitlab - Diego Andrés Restrepo Leal - Metodo de Numerov](https://gitlab.com/diegorestrepo/sistemas_operativos/-/blob/main/Documentos/metodo_de_numerov.md)