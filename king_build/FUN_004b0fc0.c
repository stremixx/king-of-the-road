
void __thiscall FUN_004b0fc0(int param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *(double *)(param_2 + 0x18);
  dVar2 = *(double *)(param_1 + 0x10);
  dVar3 = *(double *)(param_2 + 0x10);
  *(double *)(param_1 + 0x10) =
       *(double *)(param_2 + 0x10) * *(double *)(param_1 + 0x10) -
       *(double *)(param_2 + 0x18) * *(double *)(param_1 + 0x18);
  *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x18) * dVar3 + dVar1 * dVar2;
  return;
}

