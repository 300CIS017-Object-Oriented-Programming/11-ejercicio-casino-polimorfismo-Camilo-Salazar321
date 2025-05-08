
**Respuestas preguntas teóricas**

*Explique que cosas del codigo fuente indican que la clase es una clase abstracta:*

En el código de la clase JUEGO, se puede apreciar que esta cuenta con dos métodos puros, es decir que siguen 
la estructura: 

virtual + tipo de retorno + nombreDelMetodo + () + = 0;

Los cuales son los métodos calcularResultado y jugar.

Estos métodos puros hacen que la clase se convierta en una clase abstracta porque estos métodos no se implementan,
incluso se puede apreciar que el codigo no tiene un archivo .cpp ni implementaciones de los métodos, lo cual refuerza que
la clase sea abstracta porque no implementa métodos, solo deja definidos los métodos puros para que las clases derivadas
las implementen según lo que necesiten de forma obligatoria. La clase hace de plantilla para las clases hijas.


*¿Que implicaciones tiene esa decision de diseño para este programa?*

El tener una clase abstracta como Juegos con sus métodos puros, obliga primero a que las clases hijas deban de implementar
esos métodos sea intactos o por sobreescritura. Esto significa que el programa permite reutilización de código, lo cual ahorra código y
facilita el mantenimiento del código ya que es más fácil editar lo necesario en partes específicas del código sin estar buscando de más.
