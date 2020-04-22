#!/usr/bin/python3


def canUnlockAll(boxes):
    '''function for unlock all'''

    if len(boxes) == 0:
        return True

    checkr = {0}
    lista_de_llaves = [0]
    lon = len(boxes)

    while lista_de_llaves:
        caja_espejo = lista_de_llaves.pop()
        for llave in boxes[caja_espejo]:
            if isinstance(
                    llave, int) and 0 <= llave < lon and llave not in checkr:
                checkr.add(llave)
                lista_de_llaves.add(llave)

    return lon == len(checkr)
