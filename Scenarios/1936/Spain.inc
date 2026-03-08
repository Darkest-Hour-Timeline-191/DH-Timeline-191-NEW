##############################
# Country definition for SPA #
##############################
province = {
  id = 334 # La Coruña
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 7 current_size = 7 }
}
province = {
  id = 341 # Madrid
  anti_air = 3
  air_base = { size = 2 current_size = 2 }
}
province = {
  id = 347 # Sevilla
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}
province = { id = 350 landfort = 2 anti_air = 2 } # Granada
province = {
  id = 354 # Valencia
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 356 # Tarragona
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 7 current_size = 7 }
}
province = {
  id = 535 # Palma de Mallorca
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 7 current_size = 7 }
  supplypool = 2
}
province = {
  id = 963 # Las Palmas de Gran Canaria
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 1 current_size = 1 }
  supplypool = 5
  oilpool = 5
}
province = {
  id = 972 # al-Dakhila
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 2 current_size = 2 }
  supplypool = 2
}
province = { id = 1091 supplypool = 2 } # Bata
province = {
  id = 1157 # Cádiz
  naval_base = { size = 7 current_size = 7 }
}
province = { id = 2331 supplypool = 5 } # Tangah

#####################
# Country main data #
#####################

country = {
  tag                = SPA
  capital            = 341 # Madrid
  dissent            = 20
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 100
  escorts        = 27

  diplomacy = {
    relation = { tag = SWE value = 50 }
    relation = { tag = RUS value = 20 }
    relation = { tag = POR value = 175 }
    relation = { tag = POL value = 100 }
    relation = { tag = OTT value = 85 }
    relation = { tag = U09 value = 150 }
    relation = { tag = JAP value = -25 }
    relation = { tag = ITA value = 150 }
    relation = { tag = IRE value = 100 }
    relation = { tag = GER value = 150 }
    relation = { tag = FRA value = 125 }
    relation = { tag = ENG value = 100 }
    relation = { tag = BRA value = 80 }
    relation = { tag = ARG value = 80 }
    relation = { tag = BUL value = 75 }
    relation = { tag = PER value = 85 }
    relation = { tag = CSA value = -10 }
  }

  nationalprovinces      = { 7135 7133 963 964 7132 7134 7136 957 6526 954 346 3199 343 338 7118 962 3181 7165 7120 3179 1537 7121 334 7119 3178 3180 332 1726 1532 7116 331 7127 2244 3186 7113 537 3189 357 356 7110 536 3188 7111 535 2619 2620 3196 7112 355 7109 354 1714 7106 3205 352 2617 3204 7107 350 349 1157 3200 347 3201 348 351 3202 2618 3203 1161 3191 1734 3187 3190 330 7114 329 3185 3184 333 2243 340 7115 3182 339 7117 961 3195 1531 341 3192 7108 3193 353 342 3194 3183 3197 7164 3198 1162 7981 }
  ownedprovinces         = { 1091 6945 2339 4900 967 1034 4410 4411 4414 4415 4416 4417 7892 972 7901 7893 4413 7896 7895 4412 7894 971 7135 7133 963 964 7132 7134 7136 2332 4389 955 2331 4390 957 6526 954 346 3199 343 338 3196 7118 962 3181 7165 7120 3179 1537 7121 334 7119 3178 3180 332 1726 1532 7116 331 7127 2244 3186 7113 537 3189 357 356 7110 536 3188 7111 535 2619 2620 7112 355 7109 354 1714 7106 3205 352 2617 3204 7107 350 349 1157 3200 347 3201 351 3202 2618 3203 1161 1162 3191 1734 3187 3190 330 7114 329 3185 3184 333 2243 340 7115 3182 339 7117 961 3195 1531 341 3192 7108 3193 353 342 3194 3183 3197 7164 3198 7981 895 }
  controlledprovinces    = { 1091 6945 2339 4900 967 1034 4410 4411 4414 4415 4416 4417 7892 972 7901 7893 4413 7896 7895 4412 7894 971 7135 7133 963 964 7132 7134 7136 2332 4389 955 2331 4390 957 6526 954 346 3199 343 338 3196 7118 962 3181 7165 7120 3179 1537 7121 334 7119 3178 3180 332 1726 1532 7116 331 7127 2244 3186 7113 537 3189 357 356 7110 536 3188 7111 535 2619 2620 7112 355 7109 354 1714 7106 3205 352 2617 3204 7107 350 349 1157 3200 347 3201 351 3202 2618 3203 1161 1162 3191 1734 3187 3190 330 7114 329 3185 3184 333 2243 340 7115 3182 339 7117 961 3195 1531 341 3192 7108 3193 353 342 3194 3183 3197 7164 3198 7981 895 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1160 1170 1180 1190 1200 1210 1220 1230 1830 1840 1850 1910 1930 1950 1970 13060 13070 13080 1310 1320 1330 1340 1350 1360 1920 1940 1960 2620 2010 2290 2300 2310 2900 2910 2920 2800 2450 21180 2810 2820 2860 2870 2880 2630 2640 3110 3120 3130 3140 3410 3420 3430 3440 3450 3456 3460 3310 3320 3330 3210 3220 3230 3240 3610 3620 3630 3640 3010 3020 3030 3040 3050 3810 3820 3900 12100 12110 12120 3720 3730 3736 3740 3750 3510 4500 4510 4520 4530 4540 4550 4010 4300 4310 4320 4330 4600 4610 4620 4630 4120 4700 4710 4900 4740 4750 4760 4770 4800 4810 5800 5080 5810 5820 5050 5830 5310 54010 54020 54030 5326 5316 5190 5700 5710 5010 5020 5600 6500 6510 6530 6580 6590 6600 6610 6680 6620 6550 6910 6540 30020 30030 30040 7550 8500 8510 8520 8550 8560 8570 8010 8020 8040 8030 8050 8060 8070 8080 82500 8100 8110 8120 8150 8160 8170 8200 8600 8900 8910 8920 8930 8940 27480 27490 27500 27510 27570 27580 27520 9030 27530 27590 27600 9020 27540 27560 27550 27460 27470 }

  policy = {
    democratic        = 8
    political_left    = 3
    freedom           = 7
    free_market       = 8
    professional_army = 6
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 6 id = 35014 } # H.M. Alfonso XIII
  headofgovernment       = { type = 6 id = 35020 } # J.M. Gil-Robles Quiñones
  foreignminister        = { type = 6 id = 35037 } # Ramiro de Maeztu
  armamentminister       = { type = 6 id = 35064 } # José Calvo-Sotelo
  ministerofsecurity     = { type = 6 id = 35083 } # Tomás Garciano Goñi
  ministerofintelligence = { type = 6 id = 35006 } # Angel Salas Larrázabal
  chiefofstaff           = { type = 6 id = 35117 } # Francisco Franco Bahamonde
  chiefofarmy            = { type = 6 id = 35181 } # Francisco Franco Bahamonde
  chiefofnavy            = { type = 6 id = 35009 } # Francisco Moreno Fernández
  chiefofair             = { type = 6 id = 35010 } # Alfredo Kindelán Duany

  landunit = {
    id       = { type = 6 id = 1 }
    name     = "1a División Orgánica"
    location = 341
    division = {
      id             = { type = 6 id = 2 }
      name           = "1a División Orgánica"
      type           = infantry
      model          = 6
      extra          = light_armor_brigade
      brigade_model  = 0
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 6 id = 3 }
    name     = "1a División de Caballería"
    location = 341
    division = {
      id             = { type = 6 id = 4 }
      name           = "1a División de Caballería"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 0
      strength       = 75
    }
    division = {
      id             = { type = 6 id = 5 }
      name           = "Brigada Blindada"
      type           = light_armor
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 6 id = 6 }
    name     = "2a División Orgánica"
    location = 341
    division = {
      id             = { type = 6 id = 7 }
      name           = "2a División Orgánica"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 6
    }
  }
  landunit = {
    id       = { type = 6 id = 8 }
    name     = "3a División Orgánica"
    location = 341
    division = {
      id             = { type = 6 id = 9 }
      name           = "3a División Orgánica"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 7
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 6 id = 10 }
    name     = "4a División Orgánica"
    location = 341
    division = {
      id             = { type = 6 id = 11 }
      name           = "4a División Orgánica"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 0
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 6 id = 12 }
    name     = "5a División Orgánica"
    location = 341
    division = {
      id             = { type = 6 id = 13 }
      name           = "5a División Orgánica"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 6
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 6 id = 14 }
    name     = "Brigadas de Montaña"
    location = 341
    division = {
      id             = { type = 6 id = 15 }
      name           = "Brigadas de Montaña"
      type           = bergsjaeger
      model          = 6
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 6 id = 16 }
    name     = "6a División Orgánica"
    location = 341
    division = {
      id             = { type = 6 id = 17 }
      name           = "6a División Orgánica"
      type           = infantry
      model          = 6
      extra          = anti_air
      brigade_model  = 0
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 6 id = 18 }
    name     = "7a División Orgánica"
    location = 341
    division = {
      id             = { type = 6 id = 19 }
      name           = "7a División Orgánica"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 0
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 6 id = 20 }
    name     = "8a División Orgánica"
    location = 341
    division = {
      id             = { type = 6 id = 21 }
      name           = "8a División Orgánica"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 0
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 6 id = 22 }
    name     = "Comandancia Militar de Baleares"
    location = 341
    division = {
      id             = { type = 6 id = 23 }
      name           = "Comandancia Militar de Baleares"
      type           = infantry
      model          = 5
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 6 id = 24 }
    name     = "Comandancia Militar de Canarias"
    location = 341
    division = {
      id             = { type = 6 id = 25 }
      name           = "Comandancia Militar de Canarias"
      type           = infantry
      model          = 5
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 6 id = 26 }
    name     = "Comandancia Militar de Asturias"
    location = 341
    division = {
      id             = { type = 6 id = 27 }
      name           = "Comandancia Militar de Asturias"
      type           = infantry
      model          = 5
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 6 id = 28 }
    name     = "Circunscripción Occidental"
    location = 341
    division = {
      id             = { type = 6 id = 29 }
      name           = "Tercios de la Legión"
      type           = infantry
      model          = 6
      strength       = 60
    }
    division = {
      id             = { type = 6 id = 30 }
      name           = "Mehal-La 1"
      type           = militia
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 6 id = 31 }
      name           = "Mehal-La 3"
      type           = militia
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 6 id = 32 }
      name           = "Mehal-La 4"
      type           = militia
      model          = 1
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 6 id = 33 }
    name     = "Circunscripción Oriental"
    location = 341
    division = {
      id             = { type = 6 id = 34 }
      name           = "Fuerzas Regulares Indigenas"
      type           = infantry
      model          = 4
      strength       = 70
    }
    division = {
      id             = { type = 6 id = 35 }
      name           = "Mehal-La 2"
      type           = militia
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 6 id = 36 }
      name           = "Mehal-La 5"
      type           = militia
      model          = 1
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 6 id = 37 }
    name     = "Guardias Coloniales"
    location = 341
    division = {
      id             = { type = 6 id = 38 }
      name           = "Guardias Coloniales"
      type           = militia
      model          = 3
      strength       = 30
    }
  }

  navalunit = {
    id       = { type = 6 id = 39 }
    name     = "Base Naval Cádiz"
    location = 356
    base     = 356
    division = {
      id             = { type = 6 id = 40 }
      name           = "Reina Victoria Eugenia"
      type           = light_cruiser
      model          = 2
      strength       = 60
    }
    division = {
      id             = { type = 6 id = 41 }
      name           = "Flotilla de Destructores No. 3"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 6 id = 42 }
    name     = "Méndez Núñez"
    location = 356
    base     = 356
    division = {
      id             = { type = 6 id = 43 }
      name           = "Méndez Núñez"
      type           = light_cruiser
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 6 id = 44 }
    name     = "Escuadrón de Batalla"
    location = 356
    base     = 356
    division = {
      id             = { type = 6 id = 45 }
      name           = "1a Flotilla de Transporte Naval"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 6 id = 46 }
      name           = "2a Flotilla de Transporte Naval"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 6 id = 47 }
      name           = "Flotilla de Torpederas No. 1"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 6 id = 48 }
      name           = "Flotilla de Torpederas No. 2"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 6 id = 49 }
    name     = "Armada Colonial"
    location = 972
    base     = 972
    division = {
      id             = { type = 6 id = 50 }
      name           = "Flotilla de Destructores No. 1"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 6 id = 51 }
      name           = "Flotilla de Destructores No. 2"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 6 id = 52 }
      name           = "3a Flotilla de Transporte Naval"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 6 id = 53 }
      name           = "4a Flotilla de Transporte Naval"
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 6 id = 54 }
    name     = "Grupo C"
    location = 356
    base     = 356
    division = {
      id             = { type = 6 id = 55 }
      name           = "S101 Flotilla"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 6 id = 56 }
      name           = "S103 Flotilla"
      type           = submarine
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 6 id = 57 }
    name     = "I Flotilla de la Armada"
    location = 356
    base     = 356
    division = {
      id             = { type = 6 id = 58 }
      name           = "Jaime I"
      type           = battleship
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 6 id = 59 }
      name           = "España"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 6 id = 60 }
      name           = "Almirante Cervera"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 6 id = 61 }
      name           = "Príncipe Alfonso"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 6 id = 62 }
      name           = "Miguel de Cervantes"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 6 id = 63 }
      name           = "Flotilla de Destructores No. 4"
      type           = destroyer
      model          = 3
    }
  }

  airunit = { 
    id       = { type = 6 id = 64 }
    name     = "1a Escuadra Aérea"
    location = 341
    base     = 341
    division = {
      id             = { type = 6 id = 65 }
      name           = "1er Grupo Táctico"
      type           = tactical_bomber
      model          = 3
      strength       = 30
    }
    division = {
      id             = { type = 6 id = 66 }
      name           = "2o Grupo Táctico"
      type           = tactical_bomber
      model          = 3
      strength       = 30
    }
  }
  airunit = { 
    id       = { type = 6 id = 67 }
    name     = "2a Escuadra Aérea"
    location = 341
    base     = 341
    division = {
      id             = { type = 6 id = 68 }
      name           = "1er Grupo de Caza"
      type           = multi_role
      model          = 5
      strength       = 30
    }
    division = {
      id             = { type = 6 id = 69 }
      name           = "3er Grupo de Caza"
      type           = multi_role
      model          = 5
      strength       = 30
    }
  }
  airunit = { 
    id       = { type = 6 id = 70 }
    name     = "Fuerzas Aéreas del África"
    location = 341
    base     = 341
    division = {
      id             = { type = 6 id = 71 }
      name           = "1er Grupo de Bombardeo"
      type           = tactical_bomber
      model          = 3
      strength       = 30
    }
    division = {
      id             = { type = 6 id = 72 }
      name           = "2o Grupo de Caza"
      type           = interceptor
      model          = 4
      strength       = 30
    }
  }
}
