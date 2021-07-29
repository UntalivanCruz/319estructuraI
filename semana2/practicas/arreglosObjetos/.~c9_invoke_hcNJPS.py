listaOrdenes = list();

listaOrdenes.append({
    "numeroOrden": 0,
    "fechaEstimadaEntrega": "10/11/2021",
    "fechaEntrega": "13/12/2021",
    "origen": {
        "pais": "US",
        "departamento": "NY",
        "ciudad": "Staten Island",
        "direccionExacta": "Richmond ave, ap 32"
    },
   "destino": {
        "pais": "Honduras",
        "departamento": "cortes",
        "ciudad": "Puerto Cortes",
        "direccionExacta": "2 calle, 4 ave"
    },
    "paquetes": {
        "numeroSeguimiento": 202,
        "Peso": 22.0,
        "alto": 1.2,
        "ancho": 2.2,
        "unidades": 1
    },
    "eventos": {
      "fecha": "",
      "pais": "Honduras",
      "departamento": "cortes",
      "ciudad": "Puerto Cortes",
      "nota": "En camino"
    }
})

listaOrdenes.append({
    "numeroOrden": 0,
    "fechaEstimadaEntrega": "01/02/2021",
    "fechaEntrega": "01/02/2021",
    "origen": {
        "pais": "Mexico",
        "departamento": "Queretaro",
        "ciudad": "Santiago de queretaro",
        "direccionExacta": "2 calle, 4 ave"
    },
   "destino": {
        "pais": "Honduras",
        "departamento": "cortes",
        "ciudad": "Puerto Cortes",
        "direccionExacta": "2 calle, 4 ave"
    },
    "paquetes": [{
        "numeroSeguimiento": 3,
        "Peso": 3.0,
        "alto": 1.1,
        "ancho": 2.4,
        "unidades": 1
    },
    {
        "numeroSeguimiento": 8,
        "Peso": 2.0,
        "alto": 1.9,
        "ancho": 2.5,
        "unidades": 2
    }],
    "eventos": {
      "fecha": "30/01/2021",
      "pais": "Mexico",
      "departamento": "Queretaro",
      "ciudad": "Santiago de queretaro",
      "nota": "Stopped"
    }
})

print(listaOrdenes);