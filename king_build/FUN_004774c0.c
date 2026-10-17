
void FUN_004774c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  undefined1 local_80 [128];
  
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0x94)) {
    FUN_0047bf30(*(int *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),0,0);
    iVar3 = 0;
    if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0x94)) {
      do {
        iVar1 = *(int *)(param_1 + 0x94);
        fVar4 = (float10)FUN_00401000();
        if (fVar4 <= (float10)*(double *)(iVar1 + -8)) break;
        iVar3 = iVar3 + 1;
        *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + -8;
      } while (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0x94));
      if ((0 < iVar3) && (*(int *)(param_1 + 0x5c) == 1)) {
        uVar2 = FUN_0040e1d0(s_LICENCES_EXPIRED_0066eaec,iVar3);
        FUN_0061c369(local_80,uVar2);
        FUN_0056a570(local_80);
      }
    }
  }
  return;
}

