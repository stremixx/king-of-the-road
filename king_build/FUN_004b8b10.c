
/* WARNING: Removing unreachable block (ram,0x004b8b93) */

void FUN_004b8b10(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 local_100 [256];
  
  DAT_00695170 = 0;
  bVar1 = true;
  iVar4 = 1;
  piVar3 = &DAT_006938f8;
  do {
    FUN_0061c369(local_100,s__s_2_2d_00671504,&DAT_00671514,iVar4);
    iVar2 = FUN_004c4750(local_100,DAT_00695160);
    *piVar3 = iVar2;
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else {
      DAT_00695170 = DAT_00695170 + 1;
      *(undefined4 *)(iVar2 + 0x58) = 0x3f800000;
      *(uint *)(*piVar3 + 0x20) = *(uint *)(*piVar3 + 0x20) | 0x40220;
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar1);
  return;
}

