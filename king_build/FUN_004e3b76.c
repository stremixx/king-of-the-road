
void FUN_004e3b76(void)

{
  undefined4 *puVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_74 [48];
  undefined4 local_44 [13];
  float local_10;
  float local_c;
  float local_8;
  
  FUN_004042a0();
  FUN_004bd520();
  puVar1 = (undefined4 *)FUN_005aba00(local_74,&stack0x00000004);
  puVar4 = local_44;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  pfVar2 = (float *)FUN_0043f690();
  local_10 = *pfVar2;
  local_c = pfVar2[1];
  local_8 = pfVar2[2];
  FUN_0061ecd0((double)local_10,(double)local_c);
  return;
}

