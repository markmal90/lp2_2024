package  lp2.services;

import java.util.List;

import jakarta.enterprise.context.ApplicationScoped;
import lp2.models.GastosArchivo;
import lp2.repositories.GastosArchivoRepository;

@ApplicationScoped
public class GastosArchivoService{

    
    private final GastosArchivoRepository repository;
    
    public GastosArchivoService(GastosArchivoRepository repository){
        this.repository = repository;
    }

    public GastosArchivo obtenerUnArchivo(Integer id){
        GastosArchivo data = repository.findById(id);
        return data;
    }
    public List<GastosArchivo> listar(){
        return repository.findAll();
    }
    public void guardarUnArhivo(GastosArchivo param){
        repository.guardarDato(param);
    }
    public void eliminarArchivo(Integer id){
        repository.delete(id);
    }
}