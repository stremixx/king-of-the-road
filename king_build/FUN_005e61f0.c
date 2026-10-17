
void __thiscall FUN_005e61f0(undefined4 *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = param_2 & 0x800001ff;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffe00) + 1;
  }
  uVar1 = uVar2 + param_3;
  uVar3 = uVar1 & 0x800001ff;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffe00) + 1;
  }
  iVar4 = (uint)(uVar3 != 0) + ((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1ffU)) >> 9);
  if (iVar4 < 0x102) {
    mmioSeek((HMMIO)*param_1,param_2 - uVar2,0);
    param_1[0x8082] = param_3;
    mmioRead((HMMIO)*param_1,(HPSTR)(param_1 + 1),iVar4 * 0x200);
    param_1[0x8081] = uVar2 + 4 + (int)param_1;
  }
  return;
}

