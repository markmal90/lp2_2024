package lp2.resources;

import jakarta.ws.rs.GET;
import jakarta.ws.rs.Path;
import jakarta.ws.rs.PathParam;
import jakarta.ws.rs.Produces;
import jakarta.ws.rs.core.MediaType;
import lp2.models.resutls.MantenimientoResult;
import lp2.services.ClaseTallerService;

@Path("tarea-example")
public class TareaExampleResource{

    private ClaseTallerService service;

    public TareaExampleResource( ClaseTallerService service){
        this.service=service;
    }
    
    @GET
    @Path("/calculo-mantenimiento/{marca}/{kilometraje}")
    @Produces(MediaType.APPLICATION_JSON)
    public MantenimientoResult calcularMantenimiento(@PathParam("marca")String marca,@PathParam("kilometraje")Integer kilometraje  ) {
          return this.service.calcularMantenimiento(marca,kilometraje);
    }


}