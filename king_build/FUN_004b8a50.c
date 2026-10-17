
/* WARNING: Removing unreachable block (ram,0x004b8ae2) */

void FUN_004b8a50(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 local_100 [256];
  
  DAT_0069517c = 0;
  iVar3 = 1;
  bVar1 = true;
  do {
    FUN_0061c369(local_100,s__s_2_2d_00671504,s_leave_0067150c,iVar3);
    iVar2 = FUN_004c4750(local_100,DAT_00695160);
    (&DAT_006950ec)[DAT_0069517c] = iVar2;
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else {
      *(undefined4 *)(iVar2 + 0x58) = 0x3f800000;
      *(uint *)((&DAT_006950ec)[DAT_0069517c] + 0x20) =
           *(uint *)((&DAT_006950ec)[DAT_0069517c] + 0x20) | 0x40220;
      DAT_0069517c = DAT_0069517c + 1;
    }
    iVar3 = iVar3 + 1;
  } while (bVar1);
  return;
}

