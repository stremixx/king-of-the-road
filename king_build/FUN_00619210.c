
void __fastcall FUN_00619210(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  
  if (*(int *)(DAT_006cdbcc + 0x524) == 0) {
    pcVar4 = s_room_aa_000_00684d58;
  }
  else {
    pcVar4 = s_room_tr_000_00684d4c;
  }
  piVar1 = (int *)FUN_005ee8e0(0,pcVar4);
  if (piVar1 == (int *)0x0) {
    FUN_0060a190(0x88762715,s_File____s__Line_____ld__Date_____006714b0,
                 s_C__Nek_VRAPPLVS_terrain_terrain__00684d28,0x32a,s_Mar_19_2002_006714f8);
  }
  piVar3 = (int *)(param_1 + 8);
  iVar2 = 10;
  do {
    if (*piVar3 != 0) {
      (**(code **)(*piVar1 + 0x14))(0,*piVar3);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

