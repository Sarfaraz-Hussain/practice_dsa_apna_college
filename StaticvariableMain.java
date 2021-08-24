class StaticVariable {
	static int count = 0;
	public void increment() {
		count++;
	}
}


class StaticVariableMain {
	public static void main(String[] args) {
		StaticVariable sv1 = new StaticVariable();
		StaticVariable sv2 = new StaticVariable();

		sv1.increment();
		sv2.increment();
		System.out.println(sv1.count);
		System.out.println(sv2.count);

	}
}