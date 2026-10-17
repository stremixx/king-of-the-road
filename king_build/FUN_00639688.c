
CWnd * __thiscall FUN_00639688(CWnd *param_1,byte param_2)

{
  CWnd::~CWnd(param_1);
  if ((param_2 & 1) != 0) {
    FUN_0061c1de(param_1);
  }
  return param_1;
}

