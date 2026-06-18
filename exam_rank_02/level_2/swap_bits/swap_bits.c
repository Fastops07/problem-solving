unsigned char	swap_bits(unsigned char octet)
{
    return (octet >> 4) | (octet << 4);
}
/*
octet est promu en int pendant les opérations, puis le résultat est reconverti en unsigned char au retour. Ici, c’est correct.

Pourquoi | fonctionne ici ?
Parce que les deux morceaux ne se chevauchent pas.
    octet >> 4 donne quelque chose à droite : 0000 xxxx
    octet << 4 donne quelque chose à gauche : xxxx 0000

Pour le |, l’ordre n’est pas important.
    return ((octet >> 4) | (octet << 4));
    ==
    return ((octet << 4) | (octet >> 4));
*/
