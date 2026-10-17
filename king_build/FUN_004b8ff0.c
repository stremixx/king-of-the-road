
void FUN_004b8ff0(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined1 local_100 [256];
  
  iVar4 = 0;
  bVar1 = true;
  DAT_0069516c = 0;
  piVar3 = &DAT_00694bb8;
  do {
    if (&DAT_00694bdc < piVar3) {
      pcVar5 = &DAT_0067154c;
    }
    else {
      pcVar5 = s__s0_d_0067155c;
    }
    FUN_0061c369(local_100,pcVar5,s_mvapor_006715c8,iVar4);
    iVar2 = FUN_004c4750(local_100,DAT_00695160);
    *piVar3 = iVar2;
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else {
      *(undefined4 *)(iVar2 + 0x58) = 0x3f800000;
      *(uint *)(*piVar3 + 0x20) = *(uint *)(*piVar3 + 0x20) | 0x40220;
      DAT_0069516c = DAT_0069516c + 1;
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar1);
  if (DAT_0069516c == 0) {
    FUN_0060a190(0x88762715,s_File____s__Line_____ld__Date_____006714b0,
                 s_C__Nek_VRAPPLVS_TRUCK_aeffects_c_006714d4,0x2d6,s_Mar_19_2002_006714f8);
  }
  return;
}

