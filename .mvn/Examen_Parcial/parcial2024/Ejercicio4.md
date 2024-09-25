# code-with-quarkus

Este proyecto utiliza Quarkus, the Supersonic Subatomic Java Framework.

Si desea obtener más información sobre Quarkus, visite su website: <https://quarkus.io/>.

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

[Related guide section...](https://quarkus.io/guides/getting-started-reactive#reactive-jax-rs-resources)
[Ejercicio4.]( Ordenar Arreglo)

[Descripción: Crea un endpoint que reciba un arreglo de números y devuelva el arreglo ordenado (algoritmo de ordenación a elección).]

```java
package org.ejemplo;

import javax.ws.rs.GET;
import javax.ws.rs.Path;
import javax.ws.rs.QueryParam;
import javax.ws.rs.core.MediaType;
import javax.ws.rs.Produces;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

@Path("/ordenar-arreglo")
public class Ejercicio4Resource {

    @GET
    @Produces(MediaType.APPLICATION_JSON)
    public List<Integer> ordenarArreglo(@QueryParam("arreglo") List<Integer> arreglo) {
        return arreglo.stream().sorted().collect(Collectors.toList());
    }
}