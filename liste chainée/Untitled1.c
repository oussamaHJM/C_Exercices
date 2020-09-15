maillon* reverse(maillon* liste) {
  maillon* nouvelle_liste = 0;
  while (liste) {
      maillon* suivant = liste->succ;
      liste->succ = nouvelle_liste;
      nouvelle_liste = liste;
      liste = suivant;
  }
  return nouvelle_liste;
}
