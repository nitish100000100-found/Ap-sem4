import pytest


class ScoreProcessor:

    def process_score_file(self, file_path: str) -> int:
        try:
            with open(file_path, "r") as file:

                data = file.read().strip()

                score = int(data)

                result = score * 10

        except FileNotFoundError:
            print("Error: File not found")
            raise

        except ValueError:
            print("Error: Invalid number format in file")
            raise

        else:
            print("Data processed successfully")
            return result

        finally:
            print("File cleanup completed")


# ---------------- TEST CASES ---------------- #

def test_valid_file():

    with open("input.txt", "w") as f:
        f.write("5")

    sp = ScoreProcessor()

    assert sp.process_score_file("input.txt") == 50


def test_missing_file():

    sp = ScoreProcessor()

    with pytest.raises(FileNotFoundError):
        sp.process_score_file("missing.txt")


def test_invalid_data():

    with open("input.txt", "w") as f:
        f.write("abc")

    sp = ScoreProcessor()

    with pytest.raises(ValueError):
        sp.process_score_file("input.txt")


# ---------------- MAIN PROGRAM ---------------- #

if __name__ == "__main__":

    sp = ScoreProcessor()

    print(sp.process_score_file("input.txt"))
