# Temario
Tema1: 
Creacion de Endpoint/segundo parcial con Injeccion de Dependencias usando @Inject
Creacion de Endpoint/segundo parcial:
    Configura un nuevo Recurso en Quarkus con el path/segundo parcial. Este Endpoint debe recibir una lista String como paramento en el cuerpo de la solicitud
Inyección de Dependencias con @Inject:
    Utiliza @Inject para inyectar el servicio SegundoParcialService en el recurso REST. Explica cómo se realiza esta inyección y por qué es útil en un entorno REST.

Implementación de Métodos de Procesamiento en SegundoParcialService:
En SegundoParcialService, implementa los siguientes métodos:

Método 1: Procesa la lista de String recibida y determina cuántos de los elementos son palíndromos. Un palíndromo es una palabra o frase que se lee igual de izquierda a derecha que de derecha a izquierda (por ejemplo, "radar" o "level").
Método 2: Devuelve la lista original, pero únicamente con los elementos que son palíndromos.
Invocación de los Métodos en el Endpoint:
Desde el endpoint /segundo-parcial, invoca los métodos de SegundoParcialService con la lista de String recibida. La respuesta JSON debe incluir:

TotalPalindromos: Número total de palíndromos en la lista.
ListaPalindromos: Lista con los elementos que son palíndromos.
Manejo de Excepciones y Validaciones:
Asegúrate de manejar posibles errores o excepciones, como listas vacías o con valores null. Incluye validaciones básicas para verificar que todos los elementos de la lista son cadenas de texto válidas.

Tema 2: Creación de Endpoint /segundo-parcial-constructor con Inyección de Dependencias mediante Constructor
Inyección de Dependencias mediante Constructor en el Recurso:
Configura el recurso para que la inyección de SegundoParcialService se realice mediante el constructor. Explica la ventaja de utilizar inyección por constructor en términos de testabilidad y flexibilidad.

Implementación de Funciones en SegundoParcialService:

Modifica o adapta los métodos creados en el tema anterior para que puedan reutilizarse en el endpoint /segundo-parcial-constructor.
El servicio debe recibir la lista de String y retornar el conteo y lista de palíndromos.
Invocación de Métodos desde el Constructor:
En el endpoint /segundo-parcial-constructor, llama a los métodos de SegundoParcialService a través de la instancia inyectada por el constructor. Devuelve la respuesta en formato JSON con los mismos campos definidos anteriormente.

Pruebas de Unidad para ambos Endpoints:
Crea pruebas unitarias para verificar que los endpoints /segundo-parcial y /segundo-parcial-constructor procesan correctamente la lista de String y devuelven los resultados esperados. Asegúrate de cubrir casos con listas vacías, listas con palíndromos y listas sin palíndromos.

Comparación entre @Inject y Constructor en Quarkus:
Realiza un análisis sobre las diferencias entre inyección por constructor y @Inject. Explica en qué casos usarías cada método y cómo afecta la creación de pruebas unitarias y la reutilización de componentes.   
## Running the application in dev mode

Puede ejecutar su aplicación en modo de desarrollo que permite la codificación en vivo utilizando

```shell script
./mvnw compile quarkus:dev
```

> **_NOTE:_**  Quarkus ahora viene con una interfaz de usuario de desarrollo, que está disponible en modo de desarrollo sólo en <http://localhost:8080/q/dev/>.

## Packaging and running the application

La aplicación puede empaquetarse utilizando:

```shell script
./mvnw package
```

Produce el `quarkus-run.jar` en el archivo `target/quarkus-app/` del directorio.
Tenga en cuenta que no es un an _über-jar_ ya que las dependencias se copian en el `target/quarkus-app/lib/` del directorio.

La aplicación ya se puede ejecutar con `java -jar target/quarkus-app/quarkus-run.jar`.

Si desea construir un _über-jar_, ejecute el siguiente comando:

```shell script
./mvnw package -Dquarkus.package.jar.type=uber-jar
```

La aplicación, empaquetada como un _über-jar_, es ahora ejecutable usando `java -jar target/*-runner.jar`.

## Creating a native executable

Puedes crear un ejecutable nativo usando:

```shell script
./mvnw package -Dnative
```

O, si no tienes GraalVM instalado, puedes ejecutar la construcción del ejecutable nativo en un contenedor usando:

```shell script
./mvnw package -Dnative -Dquarkus.native.container-build=true
```

A continuación, puede ejecutar su ejecutable nativo con `./target/code-with-quarkus-1.0.0-SNAPSHOT-runner`

Si quieres aprender más sobre la construcción de ejecutables nativos, consulta <https://quarkus.io/guides/maven-tooling>.

## Related Guides

- REST ([guide](https://quarkus.io/guides/rest)): Una implementación REST de Jakarta que utiliza el procesamiento del tiempo de compilación y Vert.x. Esta extensión no es compatible con la extensión quarkus-resteasy, ni con ninguna de las extensiones que dependen de ella.
- SmallRye OpenAPI ([guía](https://quarkus.io/guides/openapi-swaggerui)): Documenta tus APIs REST con OpenAPI - viene con Swagger UI
- REST Jackson ([guía](https://quarkus.io/guides/rest#json-serialisation)): Soporte de serialización Jackson para Quarkus REST. Esta extensión no es compatible con la extensión quarkus-resteasy, o cualquiera de las extensiones que dependen de ella

## Provided Code

### REST

Inicie fácilmente sus Servicios Web REST


