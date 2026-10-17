
void __thiscall FUN_004de190(int param_1,int param_2)

{
  int *piVar1;
  undefined1 local_64 [100];
  
  if (*(int *)(param_1 + 0x12d8) != param_2) {
    *(int *)(param_1 + 0x12d8) = param_2;
    FUN_0061c369(local_64,s__s_cab_cl_00671e40,&DAT_006970da + *(int *)(param_1 + 0x1270) * 0x970);
    piVar1 = (int *)FUN_005eea00(local_64);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x28))();
    }
  }
  return;
}

