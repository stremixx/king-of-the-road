
void FUN_00600c40(void)

{
  HRESULT HVar1;
  undefined4 uVar2;
  
  if (DAT_00722d3c == 0) {
    HVar1 = CoCreateInstance((IID *)&DAT_00654340,(LPUNKNOWN)0x0,1,(IID *)&DAT_00654350,
                             (LPVOID *)&DAT_00722d3c);
    if (HVar1 < 0) {
      uVar2 = FUN_006001c0(HVar1,&DAT_0068c120);
      FUN_00401010(2,100,s_C__Nek_Vrappl_Gi_Srmidp_D1gate_c_00683184,
                   s__Id__D1gate_cpp_2001_6_25_14_48__00682bd0,0x287,
                   s_Can_not_create_DirectPlay4_objec_006831d8,uVar2);
    }
  }
  return;
}

