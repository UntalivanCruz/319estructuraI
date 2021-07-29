public class AppSeguimiento {
    
    public static void main(String[] args){
        
        ListaOrdenes arregloObjetos[]=new ListaOrdenes[2];
        
        arregloObjetos[0]=new ListaOrdenes("0", "22/06/2021", "08/07/2021", "09/07/2021",
        "Honduras", "Cortes", "San Pedro Sula", "Barrio Barandillas, 3ra calle, casa 24",
        "Numero de Seguimiento: 100", "2 kg", "10 cm", "17 pulgadas", "2");
        
        arregloObjetos[1]=new ListaOrdenes("0", "22/06/2021", "08/07/2021", "09/07/2021",
        "Honduras", "Cortes", "San Pedro Sula", "Barrio Barandillas, 3ra calle, casa 24",
        "Numero de Seguimiento: 100", "2 kg", "10 cm", "17 pulgadas", "2");
    }
    
    public void mostrar
        
         for(int i=0;i<arregloObjetos.length;i++){
            System.out.println(arregloObjetos[i]);
        }
    }
    
    }
