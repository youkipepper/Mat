%数值实验 1.1 病态问题
%输入：[0 20]之间的扰动项及小的扰动常数
%输出：加扰动后得到全部根
result = inputdlg({'请输入扰动项：在[0 20]之间的整数：'}, 'charpt 1_1', 1, {'19'});
Numb = str2Double(char(result));

if ((Numb > 20) || Numb < 10)
    errording('请输入扰动项：在[0 20]之间的整数！');
    return;
end

result = inputdlg({'请输入(0 1)之间的扰动常数'}, 'charpt 1_1', 1, {'0.00001'});
ess = str2Double(char(result));
ve = zeros(1, 21);
ve(21 - Numb) = ess;
root = roots(poly(1:20) + ve);
disp(['对扰动项', num2str(Numb), '加扰动', num2str(ess), '得到全部根为：']);
disp(num2str(root));
