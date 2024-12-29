import hashlib
from rich.console import Console
from rich.panel import Panel
from rich.prompt import Prompt

console = Console()


def hash_message(message, algorithm="sha256"):
    """
    Хеширование сообщения с использованием заданного алгоритма.
    """
    algorithms = {
        "sha256": hashlib.sha256,
        "sha512": hashlib.sha512,
        "md5": hashlib.md5
    }

    if algorithm not in algorithms:
        raise ValueError(f"Неподдерживаемый алгоритм: {algorithm}")

    with console.status("[bold green]Хеширование выполняется...", spinner="dots"):
        hasher = algorithms[algorithm]()
        hasher.update(message.encode('utf-8'))
        return hasher.hexdigest()


def save_to_file(filename, data):
    """
    Сохранение данных в файл.
    """
    with open(filename, "a") as file:
        file.write(data + "\n")


if __name__ == "__main__":
    console.print(Panel("[bold cyan]Добро пожаловать в улучшенный ХЕШЕР![/bold cyan]"))
    console.print("[bold yellow]Поддерживаемые алгоритмы:[/bold yellow] sha256, sha512, md5")
    output_file = "hash_results.txt"

    while True:
        message = Prompt.ask(
            "\n[bold green]Введите сообщение для хеширования (или 'выход' для завершения)[/bold green]")
        if message.lower() == "выход":
            console.print(Panel(f"[bold cyan]Результаты сохранены в файл: {output_file}[/bold cyan]"), style="cyan")
            break

        algorithm = Prompt.ask("[bold magenta]Введите алгоритм (sha256, sha512, md5)[/bold magenta]",
                               default="sha256").lower().strip()

        try:
            hashed = hash_message(message, algorithm)
            console.print(Panel(f"[bold blue]Хэш ({algorithm}):[/bold blue] [green]{hashed}[/green]"))
            save_to_file(output_file, f"{message} ({algorithm}): {hashed}")
        except ValueError as e:
            console.print(f"[bold red]{e}[/bold red]")
