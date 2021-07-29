let ArraysEntregas = [
    {
        "NOrden":01,
        "FechaRegistro": new Date ('2021-05-31'),
        "FechaEntregaEstimada": new Date ('2021-07-31'),
        "FechaEntrega": new Date ('2021-07-28'),
        "Origen": {
                    "Pais": "Honduras",
                    "Depar": "Cortes",
                    "Ciudad": "Choloma",
                    "Direccion": "Choloma,Barrio El Banco"
                  },
        "Destino": {
                    "Pais": "España",
                    "Depar": null,
                    "Ciudad": "Madrid",
                    "Direccion": "Calle Alcala"
                  },
        "Paquetes": {
                    "NSeguimiento":001,
                    "Peso": 160,
                    "Alto": 12,
                    "Ancho": 10,
                    "unidades": 1
                    },
        "Eventos": {
                    "Fecha": new Date ('2021-07-28'),
                    "Pais": "Honduras",
                    "Depar": "Cortes",
                    "Ciudad": "Choloma",
                    "nota": "Recibido"
                   }
    }
    ]
    console.log(ArraysEntregas)