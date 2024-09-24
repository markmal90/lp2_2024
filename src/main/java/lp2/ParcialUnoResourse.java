package lp2;

import jakarta.ws.rs.GET;
import jakarta.ws.rs.Path;
import jakarta.ws.rs.QueryParam;
import jakarta.ws.rs.core.MediaType;
import jakarta.ws.rs.Produces;
import java.util.ArrayList;
import java.util.List;

@Path("/api/algorithms")
public class ParcialUnoResourse {
     @GET
     @Path("/primos/{n}")
    @Produces(MediaType.APPLICATION_JSON)
    public List<Integer> getPrimos(@QueryParam("n") int n) {
        return primerosNPrimos(n);
    }

    private boolean esPrimo(int numero) {
        if (numero <= 1) return false;
        for (int i = 2; i * i <= numero; ++i) {
            if (numero % i == 0) return false;
        }
        return true;
    }

    private List<Integer> primerosNPrimos(int n) {
        List<Integer> primos = new ArrayList<>();
        int numero = 2;
        while (primos.size() < n) {
            if (esPrimo(numero)) {
                primos.add(numero);
            }
            ++numero;
        }
        return primos;
    }
}
