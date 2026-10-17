
void __fastcall FUN_00512e30(int param_1)

{
  int *piVar1;
  int *piVar2;
  int local_4;
  
  local_4 = param_1;
  piVar1 = (int *)FUN_0051b780(DAT_006cdc38 + 0x278,2);
  piVar2 = (int *)FUN_00512aa0(piVar1,&DAT_006d0d18,2);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_00512aa0(piVar1,&DAT_006d0d18,0);
  }
  (**(code **)(*piVar2 + 0x10))(piVar2,param_1 + 0x210,0x178,&local_4);
  (**(code **)(*piVar2 + 8))(piVar2);
  (**(code **)(*piVar1 + 8))(piVar1);
  FUN_00513f70();
  return;
}

