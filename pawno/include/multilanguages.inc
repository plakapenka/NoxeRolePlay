enum texts
{
	log_in,
	authorization,
	sign_in,
	cancel,
};
new TEXTS[texts][] = {
	{ // log_in
		"{B0B0B0}_____________________________________\n\n Добро пожаловать на сервер:::: {C7C7C7}Revised-Rp{B0B0B0}\n       Этот аккаунт зарегистрирован\n\nЛогин: {C7C7C7}%s{B0B0B0}\nВведите пароль:\n_____________________________________",
		"{B0B0B0}_____________________________________\n\n Welcome to the server {C7C7C7}Revised-Rp{B0B0B0}\n       This account registered\n\nLogin: {C7C7C7}%s{B0B0B0}\nEnter password:\n_____________________________________",
	},
	{ // authorization
		"{FFFFFF}Авторизация",
		"{FFFFFF}Authorization",
	},
	{ // sign_in
		"Войти",
		"Enter",
	},
	{ // cancel
		"Отмена",
		"Cancel",
	}
};