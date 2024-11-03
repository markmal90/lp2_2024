package  lp2.services;

import java.util.List;

import jakarta.enterprise.context.ApplicationScoped;
import lp2.models.Alumno;
import lp2.repositories.AlumnoRepository;

@ApplicationScoped
public class AlumnoService{

    
    private final AlumnoRepository repository;
    
    public AlumnoService(AlumnoRepository repository){
        this.repository = repository;
    }

    public Alumno obtener(Integer id){
        Alumno data = repository.findById(id);
        return data;
    }
    public List<Alumno> listar(){
        return repository.findAll();
    }
    public void guardar(Alumno param){
        repository.guardarDato(param);
    }
    public void eliminar(Integer id){
        repository.delete(id);
    }
}