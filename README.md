# libft
Capítulo I
Introducción
La programación en C es una actividad muy laboriosa si no tenemos acceso a todas
esas pequeñas funciones que se utilizan con frecuencia y son muy prácticas. Por esa razón,
a través de este proyecto le proponemos que dedique tiempo a reescribir esas funciones, a
comprenderlas y a dominarlas. Así podrá reutilizar su biblioteca para trabajar de manera
eficaz en sus próximos proyectos en C.
Este proyecto también le va a permitir ampliar la lista de las funciones que le pediremos con las suyas propias, y así hacer que su biblioteca sea aún más útil. No dude
en completar su libft a lo largo de su escolaridad, cuando este proyecto ya no sea más
que un recuerdo.
2
Capítulo II
Reglas comunes
• Su proyecto debe estar programado respetando la Norma. Si tiene archivos o funciones extras, entrarán dentro de la verificación de la norma y, como haya algún
error de norma, tendrá un 0 en el proyecto.
• Sus funciones no pueden pararse de forma inesperada (segmentation fault, bus error,
double free, etc.) salvo en el caso de un comportamiento indefinido. Si esto ocurre,
se considerará que su proyecto no es funcional y tendrá un 0 en el proyecto.
• Cualquier memoria reservada en el montón (heap) tendrá que ser liberada cuando
sea necesario. No se tolerará ninguna fuga de memoria.
• Si el proyecto lo requiere, tendrá que entregar un Makefile que compilará sus códigos
fuente para crear la salida solicitada, utilizando los flags -Wall, -Wextra y -Werror.
Su Makefile no debe hacer relink.
• Si el proyecto requiere un Makefile, su Makefile debe incluir al menos las reglas
$(NAME), all, clean, fclean y re.
• Para entregar los extras, debe incluir en su Makefile una regla bonus que añadirá
los headers, bibliotecas o funciones que no estén permitidos en la parte principal
del proyecto. Los extras deben estar dentro de un archivo _bonus.{c/h}. Las evaluaciones de la parte obligatoria y de la parte extra se hacen por separado.
• Si el proyecto autoriza su libft, debe copiar sus códigos fuente y y su Makefile
asociado en un directorio libft, dentro de la raíz. El Makefile de su proyecto debe
compilar la biblioteca con la ayuda de su Makefile y después compilar el proyecto.
• Le recomendamos que cree programas de prueba para su proyecto, aunque ese
trabajo no será ni entregado ni evaluado. Esto le dará la oportunidad de probar
fácilmente su trabajo al igual que el de sus compañeros.
• Deberá entregar su trabajo en el git que se le ha asignado. Solo se evaluará el trabajo
que se suba al git. Si Deepthought debe corregir su trabajo, lo hará al final de las
evaluaciones por sus pares. Si surge un error durante la evaluación Deepthought,
esta última se parará.
3
Capítulo III
Parte obligatoria
Nombre del programa
libft.a
Ficheros de entrega
*.c, libft.h, Makefile
Makefile Sí
Funciones externas autorizadas
Ver debajo
Libft autorizada No aplica
Descripción Escriba su propia librería, que contenga un
extracto de las funciones que necesitará más
adelante durante su formación.
III.1. Consideraciones técnicas
• Está prohibido utilizar variables globales.
• Si necesita funciones auxiliares para escribir una función compleja, tendrá que definir esas funciones auxiliares en static, respetando la Norma.
• Suba todos los archivos a la raíz del repositorio.
• Use el comando ar para crear su librería, está prohibido usar el comando libtool.
4
Libft Tu propia biblioteca, para ti solo
III.2. Parte 1 - Funciones de la libc
En esta primera parte, tendrá que volver a programar un conjunto de funciones de la
libc, tal y como vienen descritas en el man respectivo de su sistema. Sus funciones tendrán
que tener exactamente el mismo prototipo y el mismo comportamiento que las originales.
Sus nombres tendrán que tener el prefijo “ft_”. Por ejemplo, strlen se convierte en
ft_strlen.
Algunos de los prototipos de las funciones que tiene que volver a
programar utilizan el calificador de tipo "restrict". Esta palabra
clave pertenece al estándar c99, por lo tanto no debe incluirlo en
sus prototipos y no debe compilar con el flag -std=c99.
Tiene que volver a programar las funciones siguientes. Estas funciones no necesitan
ninguna función externa:
• memset
• bzero
• memcpy
• memccpy
• memmove
• memchr
• memcmp
• strlen
• strlcpy
• strlcat
• strchr
• strrchr
• strnstr
• strncmp
• atoi
• isalpha
• idigit
• isalnum
• isascii
• isprint
• toupper
• tolower
También tendrá volver programar estas funciones llamando a la función “malloc”:
• calloc
• strdup
