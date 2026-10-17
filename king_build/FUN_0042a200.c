
void FUN_0042a200(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  undefined4 local_10;
  undefined4 local_c;
  
  piVar3 = (int *)*DAT_0068becc;
  if (piVar3 != DAT_0068becc) {
    do {
      iVar1 = piVar3[2];
      iVar2 = *(int *)(iVar1 + 0x14);
      if (((*(char *)(iVar1 + 0x68) != '\0') && (iVar2 != 0)) &&
         (*(int *)(iVar2 + 0x1c) != *(int *)(iVar2 + 0x20))) {
        local_10 = 0;
        local_c = 0;
        FUN_00429db0((int *)(iVar2 + 0x1c),&local_10);
        if (*(int *)(iVar2 + 0x1c) == *(int *)(iVar2 + 0x20)) {
          *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xffffffbf;
          fVar4 = (float10)FUN_00401000();
          *(double *)(iVar1 + 0x60) = (double)fVar4;
          DAT_0068bf7c = DAT_0068bf7c + 1;
          DAT_0068c044 = DAT_0068c044 + -1;
        }
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != DAT_0068becc);
  }
  return;
}

